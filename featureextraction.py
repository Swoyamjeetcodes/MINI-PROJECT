import os
import csv
import time
import json
import subprocess
import multiprocessing
import re

# Directory containing C programs
C_PROGRAMS_DIR = "random_c_programs"
OUTPUT_CSV = "features.csv"
OPTIMIZATION_FLAGS = ["-O0", "-O1", "-O2", "-O3", "-Ofast"]
NUM_WORKERS = multiprocessing.cpu_count()  # Use all available CPU cores

def count_lines_of_code(file_path):
    """Count lines of code in a C file."""
    with open(file_path, 'r', encoding='utf-8') as f:
        return sum(1 for line in f if line.strip())

def analyze_static_features(file_path):
    """Use Clang AST dump to count loops and conditionals."""
    command = ["clang", "-Xclang", "-ast-dump=json", "-fsyntax-only", file_path]
    result = subprocess.run(command, capture_output=True, text=True)
    
    if result.returncode != 0:
        return 0, 0, 0, 0  # Default values on error
    
    try:
        ast = json.loads(result.stdout)
    except json.JSONDecodeError:
        return 0, 0, 0, 0
    
    def count_nodes(node, kind):
        if isinstance(node, dict):
            return (node.get("kind") == kind) + sum(count_nodes(v, kind) for v in node.values())
        if isinstance(node, list):
            return sum(count_nodes(item, kind) for item in node)
        return 0
    
    return (
        count_nodes(ast, "ForStmt"),
        count_nodes(ast, "WhileStmt"),
        count_nodes(ast, "IfStmt"),
        count_nodes(ast, "SwitchStmt")
    )

def compile_and_measure_execution(source_file):
    """Compile a C program with different optimization flags and measure execution time."""
    exec_times = {}
    best_flag = None
    best_exec_time = float("inf")
    
    for opt_flag in OPTIMIZATION_FLAGS:
        output_file = source_file.replace(".c", f"_{opt_flag}.exe")
        if subprocess.run(["clang", opt_flag, source_file, "-o", output_file], capture_output=True).returncode == 0:
            start_time = time.time()
            subprocess.run([output_file], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            exec_time = time.time() - start_time
            exec_times[opt_flag] = exec_time
            if exec_time < best_exec_time:
                best_exec_time = exec_time
                best_flag = opt_flag
        else:
            exec_times[opt_flag] = None
    
    return exec_times, best_flag

def process_file(filename):
    """Process a single file: extract features, compile, and measure execution time."""
    if not filename.endswith(".c"):
        return None
    
    source_file = os.path.join(C_PROGRAMS_DIR, filename)
    loc = count_lines_of_code(source_file)
    num_for_loops, num_while_loops, num_if_statements, num_switch_statements = analyze_static_features(source_file)
    exec_times, best_flag = compile_and_measure_execution(source_file)
    
    result = {
        "Filename": filename,
        "LOC": loc,
        "ForLoops": num_for_loops,
        "WhileLoops": num_while_loops,
        "IfStatements": num_if_statements,
        "SwitchStatements": num_switch_statements,
        "O0ExecTime": exec_times.get("-O0", "N/A"),
        "O1ExecTime": exec_times.get("-O1", "N/A"),
        "O2ExecTime": exec_times.get("-O2", "N/A"),
        "O3ExecTime": exec_times.get("-O3", "N/A"),
        "OfastExecTime": exec_times.get("-Ofast", "N/A"),
        "BestFlag": best_flag
    }
    
    # Append to CSV file after processing each file
    with open(OUTPUT_CSV, 'a', newline='') as csvfile:
        writer = csv.DictWriter(csvfile, fieldnames=result.keys())
        writer.writerow(result)
    
    print(f"Processed {filename}: {result}")
    return result

def extract_number(filename):
    """Extract numeric values from filenames for sorting."""
    match = re.search(r'\d+', filename)
    return int(match.group()) if match else float('inf')

def extract_features():
    """Extract features from all C programs using multiprocessing."""
    if not os.path.exists(OUTPUT_CSV):
        with open(OUTPUT_CSV, 'w', newline='') as csvfile:
            fieldnames = ["Filename", "LOC", "ForLoops", "WhileLoops", "IfStatements", "SwitchStatements", "O0ExecTime", "O1ExecTime", "O2ExecTime", "O3ExecTime", "OfastExecTime", "BestFlag"]
            writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
            writer.writeheader()
    
    files = sorted([f for f in os.listdir(C_PROGRAMS_DIR) if f.endswith(".c")], key=extract_number)
    total_files = len(files)
    
    with multiprocessing.Pool(NUM_WORKERS) as pool:
        for i, _ in enumerate(pool.imap(process_file, files), 1):
            print(f"Progress: {i}/{total_files} files completed")

if __name__ == "__main__":
    extract_features()

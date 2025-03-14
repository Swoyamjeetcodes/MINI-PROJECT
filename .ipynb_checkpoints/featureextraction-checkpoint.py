import os
import csv
import time
import json
import subprocess

# Directory containing C programs
C_PROGRAMS_DIR = "test"
OUTPUT_CSV = "test.csv"
OPTIMIZATION_FLAGS = ["-O0", "-O1", "-O2", "-O3", "-Ofast"]

def count_lines_of_code(file_path):
    """Count lines of code in a C file."""
    with open(file_path, 'r', encoding='utf-8') as f:
        return sum(1 for line in f if line.strip())

def analyze_static_features(file_path):
    """Use Clang AST dump to count loops and conditionals."""
    command = ["clang", "-Xclang", "-ast-dump=json", "-fsyntax-only", file_path]
    result = subprocess.run(command, capture_output=True, text=True)
    
    if result.returncode != 0:
        return 0, 0, 0, 0
    
    try:
        ast = json.loads(result.stdout)
    except json.JSONDecodeError:
        return 0, 0, 0, 0
    
    def count_nodes(node, kind):
        count = 0
        if isinstance(node, dict):
            if node.get("kind") == kind:
                count += 1
            for key in node:
                count += count_nodes(node[key], kind)
        elif isinstance(node, list):
            for item in node:
                count += count_nodes(item, kind)
        return count
    
    num_for_loops = count_nodes(ast, "ForStmt")
    num_while_loops = count_nodes(ast, "WhileStmt")
    num_if_statements = count_nodes(ast, "IfStmt")
    num_switch_statements = count_nodes(ast, "SwitchStmt")
    
    return num_for_loops, num_while_loops, num_if_statements, num_switch_statements

def compile_program(source_file, output_file, opt_flag):
    """Compile a C program with Clang and measure compilation time."""
    start_time = time.time()
    result = subprocess.run(["clang", opt_flag, source_file, "-o", output_file], capture_output=True)
    compile_time = time.time() - start_time
    return result.returncode == 0, compile_time

def measure_execution_time(executable):
    """Measure execution time."""
    start_time = time.time()
    process = subprocess.Popen([executable], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    process.wait()
    return time.time() - start_time

def extract_features():
    """Extract features from all C programs and save to CSV."""
    with open(OUTPUT_CSV, 'w', newline='') as csvfile:
        fieldnames = ["Filename", "LOC", "ForLoops", "WhileLoops", "IfStatements", "SwitchStatements", "O0ExecTime", "O1ExecTime", "O2ExecTime", "O3ExecTime", "OfastExecTime", "BestFlag"]
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
        writer.writeheader()
        
        for filename in os.listdir(C_PROGRAMS_DIR):
            if filename.endswith(".c"):
                source_file = os.path.join(C_PROGRAMS_DIR, filename)
                loc = count_lines_of_code(source_file)
                num_for_loops, num_while_loops, num_if_statements, num_switch_statements = analyze_static_features(source_file)
                
                exec_times = {}
                best_flag = None
                best_exec_time = float("inf")
                
                for opt_flag in OPTIMIZATION_FLAGS:
                    output_file = source_file.replace(".c", f"_{opt_flag}.exe")
                    compiled, compile_time = compile_program(source_file, output_file, opt_flag)
                    
                    if compiled:
                        exec_time = measure_execution_time(output_file)
                        exec_times[opt_flag] = exec_time
                        if exec_time < best_exec_time:
                            best_exec_time = exec_time
                            best_flag = opt_flag
                    else:
                        exec_times[opt_flag] = None
                
                writer.writerow({
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
                })

if __name__ == "__main__":
    extract_features()

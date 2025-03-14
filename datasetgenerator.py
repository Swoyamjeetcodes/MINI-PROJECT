import os
import random

# Directory to save generated C programs
output_dir = "random_c_programs"
os.makedirs(output_dir, exist_ok=True)

# Function to generate unique function names
used_functions = set()
def unique_func_name():
    while True:
        name = "func" + str(random.randint(1, 1000))
        if name not in used_functions:
            used_functions.add(name)
            return name

# Function to generate unique variable names
used_variables = set()
def unique_var():
    while True:
        name = "var" + str(random.randint(1, 1000))
        if name not in used_variables:
            used_variables.add(name)
            return name

# Function to generate a random function
def generate_function():
    func_name = unique_func_name()
    param = unique_var()

    recursion = (
        f"    return {func_name}({param} - 1);"
        if random.choice([True, False])
        else f"    return {random.randint(1, 100)};"
    )

    return f"""
int {func_name}(int {param}) {{
    if ({param} <= 0) return 1;
{recursion}
}}
"""

# Function to generate a random loop
def generate_loop():
    loop_var = unique_var()
    loop_body = f"        {loop_var} += {random.randint(1, 5)};"
    loop_type = random.choice(["for", "while"])

    if loop_type == "for":
        return f"    for (int {loop_var} = 0; {loop_var} < {random.randint(5, 20)}; {loop_var}++) {{\n{loop_body}\n    }}"
    else:
        return f"    int {loop_var} = 0;\n    while ({loop_var} < {random.randint(5, 20)}) {{\n{loop_body}\n        {loop_var}++;\n    }}"

# Function to generate a random conditional
def generate_conditional():
    cond_var = unique_var()
    return f"""
    int {cond_var} = {random.randint(0, 100)};
    if ({cond_var} % 2 == 0) {{
        printf("{cond_var} is even\\n");
    }} else {{
        printf("{cond_var} is odd\\n");
    }}
"""

# Generate different program sizes
def generate_c_program(size):
    global used_functions, used_variables
    used_functions.clear()  # Reset for each file
    used_variables.clear()

    num_functions = random.randint(1, size // 50 + 1)
    num_loops = random.randint(1, size // 100 + 1)
    num_conditionals = random.randint(1, size // 100 + 1)

    return f"""
#include <stdio.h>

{''.join([generate_function() for _ in range(num_functions)])}

int main() {{
{''.join([generate_loop() for _ in range(num_loops)])}
{''.join([generate_conditional() for _ in range(num_conditionals)])}
    return 0;
}}
"""

# Generate C programs with different complexity levels
for i in range(1, 10001):
    size_category = random.choice(["small", "medium", "large"])

    if size_category == "small":
        program_code = generate_c_program(30)  # <50 LOC
    elif size_category == "medium":
        program_code = generate_c_program(200)  # 50-500 LOC
    else:
        program_code = generate_c_program(600)  # >500 LOC

    filename = os.path.join(output_dir, f"program_{i}.c")
    with open(filename, "w") as f:
        f.write(program_code)

print("✅ 1,000 unique C programs generated in 'random_c_programs' directory!")

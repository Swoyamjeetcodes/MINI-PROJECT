import pandas as pd
import re

csv_file = "features.csv"  # Update with the correct path if needed

# Read the CSV file
df = pd.read_csv(csv_file)

# Extract numeric values from filenames for sorting
def extract_number(filename):
    match = re.search(r'\d+', filename)
    return int(match.group()) if match else float('inf')

# Sort by extracted numbers
df = df.sort_values(by="Filename", key=lambda x: x.apply(extract_number))

# Save back to CSV
df.to_csv(csv_file, index=False)

print("CSV file sorted successfully.")

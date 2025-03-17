# ML-Based Compiler Optimization Prediction 🚀🖥️📊

## Overview ✨🔍📉

This project explores optimizing C code compilation using machine learning. The goal is to predict the best compiler optimization flag for minimizing execution time. The workflow involves generating 10,000 C programs, extracting relevant features, and training a model using a Random Forest algorithm. 🎯🤖📈

## Project Structure 📁📌📂

```
.
├── .ipynb_checkpoints/        # Jupyter Notebook checkpoints
├── data/                      # Directory for dataset CSV files
├── example_c_files_for_model/ # Example C programs used for training
├── LICENSE                    # License information
├── README.md                  # Project documentation
├── datasetgenerator.py        # Script to generate random C programs
├── featureextraction.py       # Script to extract features from C programs
├── features.csv               # Extracted feature dataset
├── model.ipynb                # Jupyter Notebook for training the ML model
├── random_forest_no_pkl.ipynb # Model training without using pickle files
```

## Steps 🛠️🔢📋

### 1. Generating the Dataset 🎲📜💾

- `datasetgenerator.py` generates 10,000 C programs with varying structures.
- The generated C files are stored in `example_c_files_for_model/`.

### 2. Extracting Features 📊🔎📑

- `featureextraction.py` processes each C file to extract static, dynamic, and compiler-specific features.
- Extracted features are stored in `features.csv`.

### 3. Training the Model 🏋️‍♂️🤖🎛️

- `model.ipynb` trains a machine learning model (Random Forest) to predict the best compiler optimization flag for execution time.
- `random_forest_no_pkl.ipynb` provides an alternative approach without serialization.

## Features Extracted 📌📊🛠️

✅ **Static Features** (Code Structure)

- Lines of Code (LOC)
- Number of Functions, Loops, Conditionals
- Number of Variables, Function Calls
- Number of Recursive Calls

✅ **Dynamic Features** (Runtime Performance)

- Compilation Time
- Execution Time

✅ **Compiler-Specific Features**

- Different Optimization Flags (-O0 to -Ofast)
- Performance impact of each flag

## Results 🎯⚡📉

- The trained model predicts the best optimization flag for new C programs.
- Improves execution time by selecting the most efficient flag based on extracted features.

## Usage 🚀📜🖥️

1. Run `datasetgenerator.py` to generate C files.
2. Execute `featureextraction.py` to extract features.
3. Open `model.ipynb` to train and evaluate the model.

## License 📜⚖️🔓

This project is licensed under the [MIT License](LICENSE).


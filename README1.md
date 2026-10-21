## C++ Matrix Transpose Tool
A lightweight, efficient C++ program that prompts users for a $3 \times 3$ integer matrix, displays the original input, computes its mathematical transpose, and outputs the resulting matrix.
## Table of Contents
- Features
- How It Works
- Getting Started
  - Prerequisites
  - Compilation & Execution
- Example Usage
- License
## Features
- Interactive User Input: Allows users to dynamically define custom elements for a $3 \times 3$ matrix.
- Matrix Transposition: Swaps rows and columns using standard algorithmic logic:
- $$\text{trans}[j][i] = \text{arr}[i][j]$$
- Formatted Display: Outputs clear, structured representations of both original and transposed matrices in the console.
## How It Works
1. Input Phase: The program prompts the user to enter 9 integers sequentially to populate the $3 \times 3$ matrix.
2. Matrix Print: Displays the initial matrix.
3. Transpose Algorithm: Interchanges the row indices ($i$) and column indices ($j$) into a secondary 2D array (trans[3][3]).
4. Output Phase: Displays the resulting transposed $3 \times 3$ matrix.
Getting Started
## Prerequisites
To compile and run this program, you will need a C++ compiler (such as g++ or clang++).
- GCC / G++ Compiler:
- g++ --version
## Compilation & Execution
1. Clone the repository:
2. git clone https://github.com/your-username/matrix-transpose-cpp.git
3. cd matrix-transpose-cpp
4. Compile the code:
5. g++ -o transpose main.cpp
6. Run the executable:
  - Linux/macOS:
  - ./transpose
  - Windows:
  - transpose.exe
## Example Usage
Console Input
Enter the 9 elements for the 3x3 matrix:
1 2 3
4 5 6
7 8 9
Console Output
The original array is:
1 2 3 
4 5 6 
7 8 9 

The transpose of the array is:
1 4 7 
2 5 8 
3 6 9 
License
This project is open-source and available under the MIT License.
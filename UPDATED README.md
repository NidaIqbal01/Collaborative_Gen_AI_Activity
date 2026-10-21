# Matrix Transpose in C++

A simple and efficient C++ program that computes the transpose of a 2D matrix by swapping its rows and columns.

## Project Overview

In linear algebra, the **transpose** of a matrix $A$ is an operator that flips $A$ over its diagonal, switching its row and column indices. This program demonstrates matrix transposition in C++ using a standard two-dimensional array.

## Key Features

* **Clear Data Presentation:** Displays both the original matrix and the resulting transposed matrix in formatted rows and columns.
* **Maintainable Architecture:** Utilizes named dimension constants (`ROWS` and `COLS`) for scalable matrix sizing.
* **Simple Logic:** Leverages standard nested loops to map `trans[j][i] = arr[i][j]`.

## What I Contributed

In this version of the code, I introduced standard constant variables (`const int ROWS` and `const int COLS`) to replace hardcoded array dimensions. 

By avoiding hardcoded sizes (magic numbers) throughout the loops and array definitions, I made the program significantly more dynamic and maintainable. If we need to process non-square matrices or scale the matrix to a different size in the future, we only need to update the constants at the top rather than modifying every loop condition individually.

## How to Run

1. **Clone the repository:**
   ```bash
   git clone https://github.com/your-username/matrix-transpose-cpp.git
   cd matrix-transpose-cpp
   ```

2. **Compile the code:**
   ```bash
   g++ -o main main.cpp
   ```

3. **Execute the program:**
   ```bash
   ./main
   ```

## Sample Output

```text
Original Array:
1 2 3 
4 5 6 
7 8 9 

The transpose of array is:
1 4 7 
2 5 8 
3 6 9 
```

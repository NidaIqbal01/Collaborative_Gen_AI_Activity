# Matrix Transpose Simulation in C++

This repository contains a simple C++ program that demonstrates a 2D array matrix transposition. Recently, I enhanced this code to improve its user experience by adding a real-time simulation feel while preserving its core logic.

---

## What the Program Does
* Initializes a static 3x3 integer matrix.
* Displays the original matrix in a clean grid format.
* Computes the transpose of the matrix by swapping its rows and columns (`trans[j][i] = arr[i][j]`).
* Displays the final transposed matrix.

---

## Changes I Made & Why I Made Them
To make the program more interactive and visually engaging, I modified the original code with the following improvements:

1. **Included Modern C++ Time Libraries (`<thread>` and `<chrono>`)**
   * *Why:* Standard C++ does not have a built-in pause function without platform-specific code. Including `<thread>` and `<chrono>` ensures the program can pause execution in a standard, cross-platform way.

2. **Added a "Calculating..." Status Message**
   * *Why:* In the original code, the output appeared instantly. This gives users a visual cue that the program is actively processing data.

3. **Added a 2-Second Pause (`std::this_thread::sleep_for`)**
   * *Why:* Introduces a lightweight delay before printing the result, giving the terminal output a dynamic, real-time simulation feel.

---

## Getting Started

### Prerequisites
* A C++ compiler supporting C++11 or later (e.g., GCC, Clang, or MSVC).

### Compilation & Execution
You can compile and run the code using your terminal or command prompt:

```bash
g++ -std=c++11 matrix_transpose.cpp -o matrix_transpose
./matrix_transpose
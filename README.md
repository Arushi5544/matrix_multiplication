# Matrix_Multiplication
Matrix Multiplication in C

This C program demonstrates matrix multiplication functionality. It generates random matrices of specified dimensions and multiplies them together, producing the resultant matrix.

# Program Overview
The program performs the following steps:

## Initialization:
* Randomly generates the dimensions of two matrices (r, c for the first matrix, and r1, c1 for the second matrix).
* Checks if the number of columns in the first matrix is equal to the number of rows in the second matrix for valid matrix multiplication.
* Dynamically allocates memory for the matrices and the resulting matrix (mul) with appropriate sizes.
## Matrix Generation:
* Assigns random integer values to the elements of both matrices.
## Matrix Multiplication:
* Performs matrix multiplication using nested loops and stores the result in the matrix mul.
## Output Display:
* Prints the input matrices and the resulting matrix after multiplication.

# How to Use in Windows
## Compile:
* Compile the C program using a C compiler. For example:
`gcc matrix_multiplication.c`
## Run:
* Execute the compiled program:
`./a.exe`

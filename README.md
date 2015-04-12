# cpp-matrixlibrary
A custom-made CPP library for handling matrices.

Function available:

Constructors: 

matrix<T> (r, c): create a r x c matrix

matrix<T> (r, c, T** input) : r x c matrix generated by 2-D arrat input

matrix<T> (r, c, T * input) : r x c matrix generated by list of elements

Linear Row Operations:

op1 (int r, T lamda)          : row[r] -> row[r] x lamda

op2 (int r1, int r2, T lamda) : row[r1] -> row[r1] + lamda x row[r2]

swap(int r1, int r2)          : row interchange

Operators Overloaded:

Scalar, matrix Multiplication, ==, -, <<

'~' operator is used for transpose

Other functions:

matrix<T> reduced(const matrix<T> &A) : Reduced form of the given matrix

matrix<T> C_space(const matrix<T> &A) : Column Space in matrix form.

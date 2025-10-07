#ifndef CUBICMATH
#define CUBICMATH

#define MAX_ROWS 16
#define MAX_COLUMNS 16

typedef struct msize_t {
    int rows, columns;
} MSize;

typedef struct matrix_t {
    int values[MAX_ROWS][MAX_COLUMNS];
    MSize size;
} Matrix;

Matrix Matrix_Multiply(Matrix a, Matrix b);

#endif
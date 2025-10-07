#ifndef CUBICMATH
#define CUBICMATH

#define MAX_ROWS 16
#define MAX_COLUMNS 16

typedef struct msize_t {
    unsigned char rows, columns;
} MSize;

typedef struct matrix_t {
    float values[MAX_ROWS][MAX_COLUMNS];
    MSize size;
} Matrix;

Matrix Matrix_Multiply(Matrix a, Matrix b);
Matrix Matrix_MultiplyByScalar(Matrix m, float scalar);
Matrix Matrix_Add(Matrix left, Matrix right);
#endif
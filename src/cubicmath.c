#include "cubicmath.h"

Matrix Matrix_MultiplyByScalar(Matrix m, float scalar) {
    for (int i = 0; i < m.size.rows; ++i) {
        for (int j = 0; j < m.size.columns; ++j) {
            m.values[i][j] *= scalar;
        }
    }
    return m;
}
Matrix Matrix_Add(Matrix left, Matrix right) {
    for (int i = 0; i < left.size.rows; ++i) {
        for (int j = 0; j < left.size.columns; ++j) {
            left.values[i][j] += right.values[i][j];
        }
    }
    return left;
}
Matrix Matrix_Multiply(Matrix left, Matrix right) {
    // if (a.size.columns != b.size.rows) ERROR
    Matrix result;
    for (int i = 0; i < left.size.rows; ++i) {
        for (int j = 0; j < right.size.columns; ++j) {
            result.values[i][j] = 0;
            for (int k = 0; k < left.size.columns; ++k) {
                result.values[i][j] += left.values[i][k] * right.values[k][j];
            }
        }
    }
    return result;
}
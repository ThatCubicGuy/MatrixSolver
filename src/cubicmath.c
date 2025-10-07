#include "cubicmath.h"

Matrix Matrix_Multiply(Matrix a, Matrix b) {
    // if (a.size.columns != b.size.rows) return;
    Matrix result;
    for (int i = 0; i < a.size.rows; ++i) {
        for (int j = 0; j < b.size.columns; ++j) {
            result.values[i][j] = 0;
            for (int k = 0; k < a.size.columns; ++k) {
                result.values[i][j] += a.values[i][k] * b.values[k][j];
            }
        }
    }
    return result;
}
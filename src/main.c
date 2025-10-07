#include <stdio.h>
#include "cubicmath.h"

int main()
{
    Matrix a, b;
    a.size = (MSize) {
        1,
        2
    };
    b.size = (MSize) {
        2,
        1
    };
    scanf("%d %d %d %d", &a.values[0][0], &a.values[0][1], &b.values[0][0], &b.values[1][0]);
    Matrix c = Matrix_Multiply(a, b);
    printf("%d", c.values[0][0]);
    return 0;
}
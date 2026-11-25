// Write a program to perform addition, division, subtraction & multiplication of an array matrix.

#include <stdio.h>

int main() {
    int a[2][3] = {
        {9, 9, 10},
        {9, 3, 2}
    };
    int b[2][3] = {
        {5, 6, 7},
        {8, 9, 10}
    };

    int add[2][3] = {0};
    int sub[2][3] = {0};
    int div[2][3] = {0};
    int mul[2][3] = {0};

    int sizer = sizeof(a) / sizeof(a[0]);
    int sizec = sizeof(a[0]) / sizeof(a[0][0]);

    for (int i = 0; i < sizer; i++) {
        for (int j = 0; j < sizec; j++) {
            add[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
            mul[i][j] = a[i][j] * b[i][j];
            if (b[i][j] != 0) {
                div[i][j] = a[i][j] / b[i][j];
            } else {
                div[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < sizer; i++) {
        for (int j = 0; j < sizec; j++) {
            printf("Element [%d][%d] -> Addition: %d, Subtraction: %d, Multiplication: %d, Division: %d\n",
                   i, j, add[i][j], sub[i][j], mul[i][j], div[i][j]);
        }
    }

    return 0;
}
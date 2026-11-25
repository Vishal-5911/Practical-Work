// Write a program to find out in an array how many positive, negative, even, and odd numbers exist.

#include <stdio.h>

int main() {
    int a[] = {9, 10, 11, 9, 19, 25, 95, 0, -25, 999, 101};
    int size = sizeof(a) / sizeof(a[0]);
    int p = 0, n = 0, e = 0, o = 0;

    for (int i = 0; i < size; i++) {
        if (a[i] >= 0) {
            p++;
        }
        if (a[i] < 0) {
            n++;
        }
        if (a[i] % 2 == 0) {
            e++;
        }
        if (a[i] % 2 != 0) {
            o++;
        }
    }

    printf(" Positive: %d \n Negative: %d \n Even: %d \n Odd: %d \n", p, n, e, o);

    return 0;
}
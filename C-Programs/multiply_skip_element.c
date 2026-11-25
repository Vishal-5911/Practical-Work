// Write a program to multiply the elements of an array and skip the element from 1 to n & multiply the rest of elements.

#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++) {
        int result = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            result = result * a[j];
        }
        printf("Skipping index %d (value %d): %d\n", i, a[i], result);
    }

    return 0;
}
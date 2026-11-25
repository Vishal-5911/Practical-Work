// Write a program to remove the duplicate elements from an array.

#include <stdio.h>

int main() {
    int a[] = {99, 9, 44, 9, 4, 5, 6, 7, 8};
    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                for (int k = j; k < size - 1; k++) {
                    a[k] = a[k + 1];
                }
                size--;
                j--;
            }
        }
    }

    for (int j = 0; j < size; j++) {
        printf("%d\n", a[j]);
    }

    return 0;
}
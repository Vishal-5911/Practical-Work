// Write a program to find the maximum no of array.

#include <stdio.h>

int main() {
    int a[] = {99, 33, 55, 102, 9};
    int size = sizeof(a) / sizeof(a[0]);
    int more = a[0];

    for (int i = 0; i < size; i++) {
        if (a[i] > more) {
            more = a[i];
        }
    }

    printf("Greatest element is %d\n", more);

    return 0;
}
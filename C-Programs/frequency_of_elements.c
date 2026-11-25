// Write a program to find the frequency of each element in an array.

#include <stdio.h>

int main() {
    int a[] = {99, 9, 99, 5, 55, 10, 8, 7, 1, 98, 77};
    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size; i++) {
        int isD = 0;

        for (int j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                isD++;
                break;
            }
        }

        if (isD > 0) {
            continue;
        }

        int count = 1;
        for (int k = i + 1; k < size; k++) {
            if (a[i] == a[k]) {
                count++;
            }
        }

        printf("%d frequency is %d\n", a[i], count);
    }

    return 0;
}
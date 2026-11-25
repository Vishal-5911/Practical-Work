// Write a program to print a pyramid of stars.

#include <stdio.h>

int main() {
    int r = 5, i, j, space;

    for (i = 1; i <= r; i++) {
        for (space = 1; space <= r - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
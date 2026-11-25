// Write a program to print multiplication table.

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number = ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d is : %d\n", n, i, n * i);
    }

    return 0;
}
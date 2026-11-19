// Write a program to find reverse of a 4 digit number.

#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4, rev;

    printf("Enter a number = ");
    scanf("%d", &num);

    d1 = num % 10;
    d2 = (num / 10) % 10;
    d3 = (num / 100) % 10;
    d4 = num / 1000;

    rev = (d1 * 1000) + (d2 * 100) + (d3 * 10) + d4;
    printf("Reversed number = %d\n", rev);

    return 0;
}
// Write a program to find if a no is prime or not.

#include <stdio.h>

int main() {
    int num, i, isp = 1;

    printf("Enter an integer = ");
    scanf("%d", &num);

    if (num <= 1) {
        isp = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isp = 0;
                break;
            }
        }
    }

    if (isp == 1) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}
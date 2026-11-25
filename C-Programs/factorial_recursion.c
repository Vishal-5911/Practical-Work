// Program to find the factorial of a number using recursion.

#include <stdio.h>

long long mf(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * mf(n - 1);
}

int main() {
    int num;
    long long c;

    printf("Enter a number = ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        c = mf(num);
        printf("Factorial is %lld\n", c);
    }

    return 0;
}
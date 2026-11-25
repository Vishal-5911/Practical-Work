// Two number are entered write a program to find one number raised to the power of another.

#include <stdio.h>

int main() {
    int num, power;
    long long result = 1;

    printf("Enter a number = ");
    scanf("%d", &num);

    printf("Enter the power = ");
    scanf("%d", &power);

    if (power < 0) {
        printf("Negative power is not supported for integer result.\n");
    } else {
        for (int i = 1; i <= power; i++) {
            result = result * num;
        }
        printf("%lld\n", result);
    }

    return 0;
}
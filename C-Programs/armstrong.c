// Write a program to check if a number is armstrong or not.

#include <stdio.h>
#include <math.h>

int main() {
    int num, og, rem, digits = 0;
    double res = 0.0;

    printf("Enter an integer : ");
    scanf("%d", &num);

    og = num;
    while (og != 0) {
        digits++;
        og /= 10;
    }

    og = num;
    while (og != 0) {
        rem = og % 10;
        res += pow(rem, digits);
        og /= 10;
    }

    if ((int)round(res) == num) {
        printf("%d is an armstrong number.\n", num);
    } else {
        printf("%d is not a armstrong number.\n", num);
    }

    return 0;
}
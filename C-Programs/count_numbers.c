// Write a program to take the input of number from user and display no. of positive, negative and zeros entered.

#include <stdio.h>

int main() {
    int n, posi = 0, ng = 0, z = 0;

    printf("Enter how many numbers you want to enter = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num = 0;
        printf("Enter a number = ");
        scanf("%d", &num);

        if (num > 0) {
            posi++;
        } else if (num < 0) {
            ng++;
        } else {
            z++;
        }
    }

    printf("You entered %d positive no's\n", posi);
    printf("You entered %d negative no's\n", ng);
    printf("You entered %d zeros\n", z);

    return 0;
}
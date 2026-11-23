// Write a program to find reverse of a number & compare it to a original one.

#include <stdio.h>

int main() {
    int num, og, rev = 0, rem;

    printf("Enter a number = ");
    scanf("%d", &num);

    og = num;

    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("Original no = %d\n", og);
    printf("Reversed no = %d\n", rev);

    if (rev == og) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
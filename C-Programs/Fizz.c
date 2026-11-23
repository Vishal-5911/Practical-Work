// Write a program that prints no from 1 to 20 but for multiple of 3 print fizz.

#include <stdio.h>

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) {
            printf("Fizz\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}
// Write a program to print all the ASCII values from 0 to 255.

#include <stdio.h>

int main() {
    int i = 0;

    while (i <= 255) {
        printf("ASCII value: %d = character: %c\n", i, i);
        i++;
    }

    return 0;
}
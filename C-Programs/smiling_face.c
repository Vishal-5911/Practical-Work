// Write a program to fill the entire screen with smiling face.

#include <stdio.h>

int main() {
    int i;
    char ch[] = "☺";

    for (i = 0; i < 2000; i++) {
        printf("%s", ch);
    }

    return 0;
}
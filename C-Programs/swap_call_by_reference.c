// Swap two numbers using call by reference.

#include <stdio.h>

void s(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("After swapping a: %d, b: %d\n", *a, *b);
}

int main() {
    int a, b;

    printf("Enter the value of a & b: ");
    scanf("%d %d", &a, &b);

    s(&a, &b);

    return 0;
}
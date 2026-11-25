// Write a program to search an element in an array.

#include <stdio.h>

int main() {
    int a[] = {99, 30, 9, 10, 9, 9, 8};
    int size = sizeof(a) / sizeof(a[0]);
    int key, found = 0;

    printf("Enter a no to find: ");
    scanf("%d", &key);

    for (int i = 0; i < size; i++) {
        if (a[i] == key) {
            printf("Element %d is present at index %d\n", key, i);
            found = 1;
        }
    }

    if (!found) {
        printf("Element %d is not present\n", key);
    }

    return 0;
}
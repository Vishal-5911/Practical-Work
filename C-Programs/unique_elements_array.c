// Write a program to find only the unique elements in an array.

#include <stdio.h>

int main() {
    int n, num, count = 0, isDuplicate;

    printf("Enter the no. of elements to add in array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 0;
    }

    int arr[n];

    printf("Enter unique numbers: \n");
    while (count < n) {
        scanf("%d", &num);
        isDuplicate = 0;

        for (int i = 0; i < count; i++) {
            if (arr[i] == num) {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate) {
            printf("%d is duplicate, enter another number: ", num);
        } else {
            arr[count] = num;
            count++;
        }
    }

    printf("Unique array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
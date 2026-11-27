// Write a program to find youngest of three persons

#include <stdio.h>

int main() {
    int ag, ab, ac;

    printf("Enter the age of A, B and C : \n");
    scanf("%d %d %d", &ag, &ab, &ac);

    if (ag <= ab && ag <= ac) {
        printf("A\n");
    } else if (ab <= ag && ab <= ac) {
        printf("B\n");
    } else {
        printf("C\n");
    }

    return 0;
}
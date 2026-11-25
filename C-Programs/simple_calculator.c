// Write a program to make a simple calculator.

#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers = ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            printf("Sum is %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Subtraction is %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Multiplication is %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Division is %.2lf\n", num1 / num2);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Enter valid operator\n");
    }

    return 0;
}
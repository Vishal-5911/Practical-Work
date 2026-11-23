// Write a program to find length and breadth of a rectangle
#include <stdio.h>
#include <math.h>

int main() {
    double area, per;
    double half_per, discriminant, length, breadth;

    printf("Enter the area of rectangle : ");
    scanf("%lf", &area);

    printf("Enter the perimeter of rectangle : ");
    scanf("%lf", &per);

    half_per = per / 2.0;
    discriminant = (half_per * half_per) - (4 * area);

    if (area <= 0 || per <= 0 || discriminant < 0) {
        printf("Invalid Dimensions");
    } else {
        length = (half_per + sqrt(discriminant)) / 2.0;
        breadth = (half_per - sqrt(discriminant)) / 2.0;
        printf("Length of rectangle = %.2lf\n", length);
        printf("Breadth of rectangle = %.2lf\n", breadth);
    }

    return 0;
}
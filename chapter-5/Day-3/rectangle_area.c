// Write a program to calculate the area of a rectangle

#include <stdio.h>

int main() {
    double length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    area = length * width;

    printf("The area of the rectangle is: %.3lf\n", area);

return 0;
}
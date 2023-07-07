#include <stdio.h>

int main(){
    int radius, area;

    printf("Enter radius of the circle: ");
    scanf("%d", &radius);

    area = 3.1416 * radius * radius;

    printf("Area of the circle is: %d\n", area);
}
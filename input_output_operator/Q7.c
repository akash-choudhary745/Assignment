// 7. Accept the radius of the circle and calculate the area and
// perimeter of the circle.

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
    printf("Area of the circle = %.2f\n", area);
    printf("Perimeter (Circumference) = %.2f\n", perimeter);

    return 0;
}

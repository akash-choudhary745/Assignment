// 6.	Write a program to find out the roots of quadratic equation ax2 + bx + c = O 

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;

    if (d >= 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots: %.2f and %.2f\n", root1, root2);
    } else {
        printf("Complex roots.\n");
    }
    return 0;
}

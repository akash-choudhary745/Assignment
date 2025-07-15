// 5.	If the lengths of the sides of a triangle are denoted by a, b, and c, then area of triangle is given by Area = √𝑆(𝑆 − 𝑎)(𝑆 − 𝑏)(𝑆 − 𝑐) Where, S = ( a + b + c ) / 2 

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;
    printf("Enter sides a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle = %.2lf\n", area);
    return 0;
}

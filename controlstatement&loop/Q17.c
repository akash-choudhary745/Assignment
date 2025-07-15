// 17.	Write a program to find out the value of x raised to the power y, where x and yare positive integers. 

#include <stdio.h>
int main() {
    int x, y, i;
    long long result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (y): ");
    scanf("%d", &y);

    for(i = 1; i <= y; i++) {
        result *= x;
    }

    printf("%d raised to the power %d is: %lld\n", x, y, result);

    return 0;
}

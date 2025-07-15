// 23.Write a program to find the value of one number raised to the power of another. 

#include <stdio.h>

int main() {
    int base, exponent, i;
    long long result = 1;

    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for (i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power %d is: %lld\n", base, exponent, result);

    return 0;
}

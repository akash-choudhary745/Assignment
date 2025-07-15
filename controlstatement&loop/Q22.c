// 22.Write a program to find the factorial value of any number entered through the keyboard. Two numbers are entered through the keyboard. 

#include <stdio.h>

int main() {
    int num1, num2, i;
    unsigned long long fact1 = 1, fact2 = 1;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 < 0)
        printf("Factorial not defined for negative number %d\n", num1);
    else {
        for (i = 1; i <= num1; i++) {
            fact1 *= i;
        }
        printf("Factorial of %d = %llu\n", num1, fact1);
    }

    
    if (num2 < 0)
        printf("Factorial not defined for negative number %d\n", num2);
    else {
        for (i = 1; i <= num2; i++) {
            fact2 *= i;
        }
        printf("Factorial of %d = %llu\n", num2, fact2);
    }

    return 0;
}

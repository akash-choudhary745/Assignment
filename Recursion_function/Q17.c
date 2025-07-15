// 17.Write a C program to find factorial of any number using recursion. 

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial = %d", factorial(n));
    return 0;
}

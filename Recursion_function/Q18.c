// 18.Write a C program to generate nth Fibonacci term using recursion. 

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%dth Fibonacci term = %d", n, fibonacci(n));
    return 0;
}

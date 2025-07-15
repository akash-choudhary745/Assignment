// 12.Write a C program to find sum of all natural numbers between 1 to n using recursion.13.Write a C program to find sum of all even or
//  odd numbers in given range using recursion. 


#include <stdio.h>

int sumNatural(int n) {
    if (n == 0) return 0;
    return n + sumNatural(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum = %d", sumNatural(n));
    return 0;
}

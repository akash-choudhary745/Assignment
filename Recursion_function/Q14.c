// 14.Write a C program to find reverse of any number using recursion. 

#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed: %d", reverseNumber(num, 0));
    return 0;
}

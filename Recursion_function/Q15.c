// 15.Write	C program to check whether a number is palindrome or not using recursion. 

#include <stdio.h>

int reverse(int n, int rev) {
    if (n == 0) return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}

int main() {
    int num, rev;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev = reverse(num, 0);
    if (num == rev) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}

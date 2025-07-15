// 3.	A positive integer is entered through the keyboard; write a 
// function to find the binary equivalent of this number using recursion. 

#include <stdio.h>

void binary(int n) {
    if (n == 0) return;
    binary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary: ");
    binary(n);
    return 0;
}

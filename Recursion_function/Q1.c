// 1.	A positive integer is entered through the keyboard; write a program to obtain the prime factors of the number. 
// Modify the function suitably to obtain the prime factors recursively 

#include <stdio.h>

void primeFactors(int n, int i) {
    if (i > n / 2) {
        if (n > 1) printf("%d ", n);
        return;
    }
    if (n % i == 0) {
        printf("%d ", i);
        primeFactors(n / i, i);
    } else {
        primeFactors(n, i + 1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime factors: ");
    primeFactors(n, 2);
    return 0;
}

// 16.	Write a program to accept any six digit number and print the sum of all even digits of that number and multiplication of all odd digits. 

#include <stdio.h>

int main() {
    int num, digit;
    int evenSum = 0, oddProduct = 1;

    printf("Enter a six-digit number: ");
    scanf("%d", &num);

    if (num < 100000 || num > 999999) {
        printf("Invalid input! Please enter a six-digit number.\n");
        return 1;
    }

    while (num != 0) {
        digit = num % 10;  

        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddProduct *= digit;
        }

        num = num / 10;   
    }

    printf("Sum of even digits: %d\n", evenSum);
    printf("Product of odd digits: %d\n", oddProduct);

    return 0;
}

// 8.	Write a program to print number in words using recursion. For example if we have a number 31246, then the program should print " Three one Two four Six 

#include <stdio.h>

void printWord(int digit) {
    char *words[] = {"Zero", "One", "Two", "Three", "Four",
                     "Five", "Six", "Seven", "Eight", "Nine"};
    printf("%s ", words[digit]);
}

void numberToWords(int n) {
    if (n == 0) return;
    numberToWords(n / 10);
    printWord(n % 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    numberToWords(n);
    return 0;
}

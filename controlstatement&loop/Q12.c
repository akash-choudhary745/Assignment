// 12.Write a program to enter a number and find the reverse of that number. 

#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number: ");
    while (num != 0) 
    {
        digit = num % 10;         
        printf("%d", digit);      
        num = num / 10;           
    }

    printf("\n");
    return 0;
}

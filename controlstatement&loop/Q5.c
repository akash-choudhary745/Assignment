// 5.	A five-digit number is entered through the keyboard. Write a 
// program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not. 

#include <stdio.h>
int main()
 {
    int num, original, reversed = 0, digit;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) 
    {
        digit = num % 10;                     
        reversed = reversed * 10 + digit;     
        num = num / 10;                       
    }

    printf("Reversed number: %d\n", reversed);

    if (original == reversed)
    {
        printf("The original and reversed numbers are equal. It's a palindrome.\n");
    } 
    else
    {
        printf("The original and reversed numbers are not equal.\n");
    }

    return 0;
}

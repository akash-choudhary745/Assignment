// 13. Input a number and a digit and find whether the digit is present in the number or not, 
// if present then count the number of times it occurs in the number. 


#include <stdio.h>

int main() {
    int number, digit, count = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the digit to search for: ");
    scanf("%d", &digit);

    int temp = number;  

    while (number != 0) 
    {
        remainder = number % 10;     
        if (remainder == digit)
        {
            count++;
        }
        number = number / 10;        
    }

    if (count > 0) 
    {
        printf("Digit %d is present in %d and occurs %d time(s).\n", digit, temp, count);
    }
    else
    {
        printf("Digit %d is NOT present in %d.\n", digit, temp);
    }

    return 0;
}

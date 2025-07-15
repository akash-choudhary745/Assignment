// 18.Write a program to accept any number up to six digits and print that in words. For example- 1265 = one two six five Write a program 
// to enter a number and test whether it is a Fibonacci number or not. 

#include <stdio.h>
#include <math.h>
int main() 
{
    int num, temp, rev = 0, digit;

    printf("Enter a number (up to 6 digits): ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("In words: zero\n");
        printf("0 is a Fibonacci number.\n");
        return 0;
    }

    temp = num;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    printf("In words: ");
    while (rev != 0) 
    {
        digit = rev % 10;
        if (digit == 0) printf("zero ");
        else if (digit == 1) printf("one ");
        else if (digit == 2) printf("two ");
        else if (digit == 3) printf("three ");
        else if (digit == 4) printf("four ");
        else if (digit == 5) printf("five ");
        else if (digit == 6) printf("six ");
        else if (digit == 7) printf("seven ");
        else if (digit == 8) printf("eight ");
        else if (digit == 9) printf("nine ");
        rev = rev / 10;
    }
    printf("\n");

    int n1 = 0, n2 = 1, n3;
    int isFibo = 0;

    while (n1 <= num)
     {
        if (n1 == num) 
        {
            isFibo = 1;
            break;
        }
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    if (isFibo)
        printf("%d is a Fibonacci number.\n", num);
    else
        printf("%d is NOT a Fibonacci number.\n", num);

    return 0;
}

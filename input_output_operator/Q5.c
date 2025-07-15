// 5. If a four-digit number is input through the keyboard, write a
// program to obtain the sum of the first and last digit of this number.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum=0;
    sum=num%10;
    while(num!=0)
    {
         if(num/10==0)
        {
            sum+=num;
        }
        num=num/10;
    }
    printf("sum of first and last digit: %d",sum);
}
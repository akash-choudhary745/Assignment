// 9. Accept any five digit number and print the value of remainder
// after dividing by 3.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a five digit number: ");
    scanf("%d",&num);
   
    if(num<=99999 && num>=10000)
    {
        int remainder=num%3;
        printf("remainder -> %d",remainder);
    }
    else
    {
        printf("Please Enter 5 digit number");
    }
}
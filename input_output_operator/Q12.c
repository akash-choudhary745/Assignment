// 12.Write a program to accept the principal, rate, and number of years and find out the simple interest. 


#include<stdio.h>
int main()
{
    float principal,rate,years,intrest;

    printf("Enter the principal: ");
    scanf("%f",&principal);
    printf("Enter the rate: ");
    scanf("%f",&rate);
    printf("Enter the years: ");
    scanf("%f",&years);

    intrest = (rate*principal*years)/100;

    printf("Intrest = %f",intrest);

}
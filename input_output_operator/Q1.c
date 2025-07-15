// 1. Rajesh’s basic salary is input through the keyboard. His dearness
// allowance is 40% of basic salary, and house rent allowance is 20%
// of basic salary. Write a program to calculate his gross salary.


#include<stdio.h>
int main()
{
    float salary;
    printf("Enter Rajesh basic salary:");
    scanf("%f",&salary);

    float Da=0,Hr=0,Gs=0;
    Da=(salary*40)/100;
    Hr=(salary*20)/100;
    Gs=Da+Hr+salary;

    printf("%f\n",Gs);
    return 0;
}
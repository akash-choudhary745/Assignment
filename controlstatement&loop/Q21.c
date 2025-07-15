// 21.Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked
//  above 40 hours. Assume that employees do not work for fractional part of an hour. 

#include <stdio.h>

int main() 
{
    int hours, overtime_hours, i;
    float overtime_pay;

    printf("Enter total hours worked by 10 employees:\n");

    for (i = 1; i <= 10; i++) 
    {
        printf("Employee %d: ", i);
        scanf("%d", &hours);

        if (hours > 40)
        {
            overtime_hours = hours - 40;
            overtime_pay = overtime_hours * 12.0;
            printf("Overtime pay for Employee %d is: Rs. %.2f\n", i, overtime_pay);
        } 
        else
         {
            printf("Employee %d is not eligible for overtime pay.\n", i);
        }
    }

    return 0;
}

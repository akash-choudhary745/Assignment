// 7.	Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. 
// A triangle is valid if the sum of all the three angles is equal to 180 degrees. 


#include<stdio.h>
int main()
{
    int angle1, angle2, angle3;
    int triangle=180;
    printf("Enter the three angles of triangle: ");
    scanf("%d%d%d",&angle1, &angle2, &angle3);
    
    if((angle1 > 0 && angle2 > 0 && angle3 > 0) && ((angle1+angle2+angle3)==triangle))
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Triangle is not valid\n");
    }

}
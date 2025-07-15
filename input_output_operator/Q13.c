// 13.Accepts marks in five subjects and calculate the total percentage marks. 


#include<stdio.h>
int main()
{
    float math, physics, english, science, socialScience;

    printf("Enter marks of five subject:");
    scanf("%f%f%f%f%f",&math, &physics, &english, &science, &socialScience);

    float percent;
    percent = ((math+physics+english+science+socialScience)/500) *100;

    printf("%f percent",percent);

}
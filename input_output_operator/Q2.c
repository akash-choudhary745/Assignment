// 2. The distance between two cities (in km.) is input through the
// keyboard. Write a program to convert and print this distance in
// meters, feet, inches and centimeters.

#include<stdio.h>
int main()
{
float distance;
printf("Enter Distance between two cities: ");
scanf("%f",&distance,"km");

float meters, feet, inches, centemeters;

meters = distance*1000;
feet = meters*3.280;
inches = feet*12;
centemeters = inches*2.54;

printf("%f km -> %f meter\n",distance,meters);
printf("%f km -> %f feet\n",distance,feet);
printf("%f km -> %f inches\n",distance,inches);
printf("%f km -> %f centimeters\n",distance,centemeters);



}
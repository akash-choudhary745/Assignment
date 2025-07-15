// 6. Enter the temperature in Celsius and convert that into Fahrenheit.

#include<stdio.h>
int main()
{
    float temperature;
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&temperature);

    float fahrenheit;

    fahrenheit = (temperature*1.8)+32;

    printf("%f celsius -> %f fahrenheit",temperature,fahrenheit);
}
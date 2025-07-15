// 8.	Find the absolute value of a number entered through the keyboard

#include <stdio.h>

int main() {
    int number, absValue;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
        absValue = -number;
    else
        absValue = number;

    printf("Absolute value = %d\n", absValue);

    return 0;
}

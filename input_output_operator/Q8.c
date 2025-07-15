// 8. Write a program to accept the number in decimal and print the
// number in octal and
// hexadecimal. ,


#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("%o\n",num);
    printf("%x",num);
}
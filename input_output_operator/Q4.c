// 4. If a five-digit number is input through the keyboard, write a
// program to reverse the number.


#include<stdio.h>
int main()
{
int num;
printf("Entrer a Number: ");
scanf("%d",&num);
int copy=0;
while(num!=0)
{
    copy=copy*10 + num%10;
    num=num/10;
}

printf("%d",copy);
}
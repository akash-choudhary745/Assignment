// 3. If a five-digit number is input through the keyboard, write a
// program to calculate the sum of its digits. (Hint: Use the modulus
// operator ‘%’)

#include<stdio.h>
int main()
{
int num;
printf("Enter a five digit number: ");
scanf("%d",&num);
int sum=0;
while(num!=0)
{
sum=sum+num%10;
num=num/10;;
}

printf("sum of number is: %d",sum);

}
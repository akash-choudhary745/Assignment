// 10.Accept any two numbers, if the first number is greater than second then print the sum of these two numbers, otherwise print their difference. 

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two number:\n");
    scanf("%d%d",&x,&y);

    if(x>y)
    {
        printf("sum = %d\n",x+y);
    }
    else
    {
        printf("disstance = %d\n",y-x);
    }
}
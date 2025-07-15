// 11.Write this program using ternary operator. 

#include<stdio.h>
int main()
{
     int x,y;
    printf("Enter two number:\n");
    scanf("%d%d",&x,&y);

    (x>y)?printf("sum = %d\n",x+y):printf("disstance = %d\n",y-x);
    
}
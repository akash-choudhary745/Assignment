// 11.Write a program to print prime numbers from 1 to 99. 
// (Hint: 'See P5.27, instead of entering a number, take a for loop that generates numbers from 1 to 99) 

#include<stdio.h>
int main()
{
    int i,j,c=0;

    for(i=1;i<99;i++)
    {
        c=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
        c++;
        break;
        }
    }
    if(c==0)
    {
        printf("%d  ",i);
    }
    }
}
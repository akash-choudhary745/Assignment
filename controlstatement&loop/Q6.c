// 6.	If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three. 

#include<stdio.h>
int main()
{
    int ram, shyam, ajay;

    printf("Enter the ages of ram shyam and Ajay: ");
    scanf("%d%d%d",&ram, &shyam, & ajay);

    if(ram>shyam && ram>shyam)
    {
        printf("ram is youngest of three");
    }
    else if(shyam>ram && shyam>ajay)
    {
        printf("shyam is youngest of three");
    }
    else
    {
        printf("ajay is youngest of three");
    }
}
// 25.Write a program to print all prime numbers from 1 to 300. (Hint: Use nested loops, break and continue) 

#include <stdio.h>
int main()
{
    int i, j, isPrime;

    printf("Prime numbers from 1 to 300:\n");

    for (i = 2; i <= 300; i++) {
        isPrime = 1; 

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;       
            }
        }

        if (isPrime)
            printf("%d ", i);
        else
            continue; 
    }

    printf("\n");
    return 0;
}


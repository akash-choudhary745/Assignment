// 24. Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary 
// from 0 to 255.
#include <stdio.h>
int main() {
    int i = 0;

    printf("ASCII values and their characters:\n");

    while (i <= 255) {
        printf("ASCII %3d = %c\n", i, i);
        i++;
    }

    return 0;
}

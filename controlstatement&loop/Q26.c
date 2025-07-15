// 26.Write a program to fill the entire screen with a smiling face. The smiling face has an ASCII value 1. 

#include <stdio.h>
#include <conio.h>  

int main() {
    int i;

    clrscr();

    for (i = 1; i <= 2000; i++) {
        printf("%c", 1);
    }

    getch(); 
    return 0;
}

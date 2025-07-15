//  27.Write	program to produce the following output: 
// A 
// BC 
// DEFG 
// FED 
// CB 
// A 

#include <stdio.h>

int main() {
    char ch = 'A';
    int i, j;

  
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

   
    ch -= 1;

    for (i = 2; i >= 1; i--) {
        
        ch -= 2 * i - 1;
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
       
        ch -= 2 * i - 1;
    }

    return 0;
}

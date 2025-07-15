// 9.	Write a function cube sum ( ) that accepts an integer and returns the sum of the cubes of individual digits of that number. 
// Use this program to print Armstrong numbers in a given range. 


#include <stdio.h>

int cubeSum(int n) {
    if (n == 0) return 0;
    int d = n % 10;
    return d * d * d + cubeSum(n / 10);
}

int main() {
    printf("Armstrong numbers between 1 and 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        if (cubeSum(i) == i)
            printf("%d ", i);
    }
    return 0;
}

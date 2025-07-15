// 11.Write a C program to print all even or odd numbers in given range using recursion . 
#include <stdio.h>

void printEvenOdd(int start, int end, int even) {
    if (start > end) return;
    if (even && start % 2 == 0) printf("%d ", start);
    if (!even && start % 2 != 0) printf("%d ", start);
    printEvenOdd(start + 1, end, even);
}

int main() {
    int start, end, choice;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    printf("Print (1)Even or (0)Odd? ");
    scanf("%d", &choice);
    printEvenOdd(start, end, choice);
    return 0;
}

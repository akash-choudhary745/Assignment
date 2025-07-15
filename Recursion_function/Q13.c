// 13.Write a C program to find sum of all even or odd numbers in given range using recursion


#include <stdio.h>

int sumEvenOdd(int start, int end, int even) {
    if (start > end) return 0;
    if (even && start % 2 == 0) return start + sumEvenOdd(start + 1, end, even);
    if (!even && start % 2 != 0) return start + sumEvenOdd(start + 1, end, even);
    return sumEvenOdd(start + 1, end, even);
}

int main() {
    int start, end, choice;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    printf("Sum (1)Even or (0)Odd? ");
    scanf("%d", &choice);
    printf("Sum = %d", sumEvenOdd(start, end, choice));
    return 0;
}

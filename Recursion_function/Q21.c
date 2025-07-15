// 21.Write a C program to display all array elements using recursion. 

#include <stdio.h>

void display(int arr[], int index, int size) {
    if (index == size) return;
    printf("%d ", arr[index]);
    display(arr, index + 1, size);
}

int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    display(arr, 0, n);
    return 0;
}

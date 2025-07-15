// 23.Write a C program to find maximum and minimum elements in array using 

#include <stdio.h>

int findMax(int arr[], int index, int size) {
    if (index == size - 1) return arr[index];
    int max = findMax(arr, index + 1, size);
    return (arr[index] > max) ? arr[index] : max;
}

int findMin(int arr[], int index, int size) {
    if (index == size - 1) return arr[index];
    int min = findMin(arr, index + 1, size);
    return (arr[index] < min) ? arr[index] : min;
}

int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Max = %d\\n", findMax(arr, 0, n));
    printf("Min = %d\\n", findMin(arr, 0, n));
    return 0;
}

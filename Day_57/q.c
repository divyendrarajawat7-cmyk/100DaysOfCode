// Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], result[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Brute force: for each element, scan to its left (nearest first)
    for (int i = 0; i < n; i++) {
        result[i] = -1;                    // default if nothing greater is found
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j];        // nearest greater element on the left
                break;                     // stop at the first one found
            }
        }
    }

    // Print in comma-separated fashion
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
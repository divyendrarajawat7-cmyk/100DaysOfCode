// Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

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

    // Brute force: for each element, scan to its right
    for (int i = 0; i < n; i++) {
        result[i] = -1;                    // default if nothing greater is found
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j];        // nearest greater element on the right
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
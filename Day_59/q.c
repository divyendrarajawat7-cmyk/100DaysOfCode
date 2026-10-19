// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main(void) {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k\n");
        return 0;
    }

    // Sum of the first window
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    int maxSum = windowSum;

    // Slide the window one step at a time
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];   // add entering, remove leaving
        if (windowSum > maxSum) maxSum = windowSum;
    }

    printf("%d\n", maxSum);
    return 0;
}
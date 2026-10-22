// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max_sum = arr[0];
    int current_sum = arr[0];

    for(int i = 1; i < n; i++){
        current_sum = fmax(arr[i], current_sum + arr[i]);
        max_sum = fmax(max_sum, current_sum);
    }
    printf("The maximum sum of any contiguous subarray is: %d\n", max_sum);
    return 0;
}
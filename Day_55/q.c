// Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int majorityElement(int arr[], int n);

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int res;
    res = majorityElement(arr, n);

    if(res != -1){
        printf("The majority element is: %d\n", res);
    } else {
        printf("No majority element exists.\n");
    }

    return 0;
}

int majorityElement(int arr[], int n){
    int candidate, count = 0;

    for(int i = 0; i < n; i++){
        if(count == 0){
            candidate = arr[i];
            count = 1;
        } else if(arr[i] == candidate){
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}
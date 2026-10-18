// Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

int main(void){
    int n, arr[n], answer[n];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    answer[0] = 1;
    for(int i = 1; i < n; i++){
        answer[i] = answer[i - 1] * arr[i - 1];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= arr[i];
    }

    printf("The answer array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", answer[i]);
    }

    return 0;
}
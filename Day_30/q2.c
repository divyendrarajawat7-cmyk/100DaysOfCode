// A program to print the positive, negatice, and zero elements in an array

#include <stdio.h>

int main(){
    int n;
    int arr[n];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // print positive numbers
    printf("Positive numbers in the array: ");
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            printf("%d ", arr[i]);
        }
    }

    // print negative numbers
    printf("\nNegative numbers in the array: ");
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            printf("%d ", arr[i]);
        }
    }

    // print zero elements
    printf("\nZero elements in the array: ");
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
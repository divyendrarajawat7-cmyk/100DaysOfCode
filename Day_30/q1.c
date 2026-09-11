// A program to print all the even and odd numbers in an array

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

    // print even numbers
    printf("Even numbers in the array: ");
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }

    // print odd numbers
    printf("\nOdd numbers in the array: ");
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
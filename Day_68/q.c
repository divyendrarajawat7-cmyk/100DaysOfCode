// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main(){
    int n, arr[n];
    int sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array (between 0 to %d, except one missing number):\n", n);
    for(int i = 0; i < n - 1; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int expected = n * (n - 1) / 2;
    int missing = expected - sum;

    printf("The missing number is: %d\n", missing);
    return 0;
}    
// A program to print the sum of all elements of a matrix 

#include <stdio.h>

int main(){
    int n, k;
    int arr[n][k];

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &k);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            sum = sum + arr[i][j];
        }
    }

    printf("The sum of all elements of the matrix is: %d\n", sum);
    return 0;
}
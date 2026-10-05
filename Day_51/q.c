

#include <stdio.h>

int main(){
    int arr[100];
    int n;
    int x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the sorted array: ");
    for(int i = 0; i < n; i++){ // 1, n+1, n
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);
    
    // Find the index of the smallest element greater than or equal to x
    int low = 0; // 1
    int high = n - 1; // 1
    int result = -1; // 1
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] >= x){
            result = mid; // 1
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    if(result != -1){
        printf("The index of the smallest element greater than or equal to %d is %d\n", x, result);
    } else {
        printf("No element found greater than or equal to %d\n", x);
    }

}
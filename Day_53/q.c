#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int total = 0;
    for(int i = 0; i < n; i++){
        total += arr[i];
    }

    long long left = 0;
    int ans = -1;
    for(int i = 0; i < n; i++){
        left += arr[i];
        long long right = total - left;
        if(left == right){
            printf("Equilibrium index found at position: %d\n", i);
            free(arr);
            return 0;
        }
    }
    printf("%d\n", ans);
    free(arr);
    return 0;
}
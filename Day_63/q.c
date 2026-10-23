
#include <stdio.h>

int main() {
    int arr[100], n, k, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid value of k\n");
        return 0;
    }

    // Bubble sort in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the kth smallest element
    printf("%d\n", arr[k - 1]);

    return 0;
}


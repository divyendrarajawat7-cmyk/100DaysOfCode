
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the sizes of the two arrays: ");
    scanf("%d %d", &m, &n);

    int a[m], b[n], merged[m + n];

    printf("Enter elements of the first sorted array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of the second sorted array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0, k = 0;

    // Merge both arrays in sorted order
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k] = a[i];
            i++;
        } else {
            merged[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of the first array
    while (i < m) {
        merged[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of the second array
    while (j < n) {
        merged[k] = b[j];
        j++;
        k++;
    }

    printf("Merged sorted array: ");
    for (int p = 0; p < m + n; p++) {
        printf("%d ", merged[p]);
    }

    printf("\n");

    return 0;
}

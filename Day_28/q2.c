// A porgram to read and print all the elements of a 1-D array

#include <stdio.h>

int main(){
	int n;
	int arr[n];
	printf("Enter the total number of elements in the array: ");
	scanf("%d", &n);

	// Read the array
	for(int i = 0; i < n; i++){
		printf("Enter the elements of the array: ");
		scanf("%d", &arr[i]);
	}

	// Print the elements
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}

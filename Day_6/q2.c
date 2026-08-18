// A program to input an integer and check whether it is positive, negative or 0 using nested if-else loops

#include <stdio.h>

int main(){
	int a;
	
	// take user input 
	printf("Enter any integer: ");
	scanf("%d", &a);

	// Check whether it's positive, negative or 0.
	if(a > 0){
		printf("Positive\n");
	} else if(a < 0){
		printf("Negative\n");
	}else {
		printf("Zero\n");
	}

	return 0;
}

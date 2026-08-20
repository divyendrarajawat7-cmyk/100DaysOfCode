// A program to input three numbers and find the largest among them

#include <stdio.h>

int main(){
	int a, b, c;

	// Take user inputs
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the third number: ");
	scanf("%d", &c);

	// Check for the largest number
	if( a > b && a > c){
		printf("%d is the largest among the three.\n", a);
	} else if(b > a && b > c){
		printf("%d is the largest among the three.\n", b);
	} else{
		printf("%d is the largest among the three.\n", c);
	}

	return 0;
}

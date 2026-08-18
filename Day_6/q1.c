// A program to input an integer and check whether it's even or odd using if-else

#include <stdio.h>

int main(){
	int a;

	// Take input from the user 
	printf("Enter any integer to whether it's even or odd: ");
	scanf("%d", &a);

	// Check whether the integer is odd or even
	if (a % 2 == 0){
		printf("%d is even.\n", a);
	} else{
		printf("%d is odd.\n", a);
	}

	return 0;
}

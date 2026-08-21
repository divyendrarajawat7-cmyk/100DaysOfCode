// A program that accepts a percentage and assigns a grade based on the percentage 

#include <stdio.h>

int main(){
	int per;

	// Take user input for percentage
	printf("Enter the percentage: ");
	scanf("%d", &per);

	// Give grades on the basis of percentage
	if (per >= 90){
		printf("Grade A\n");
	} else if (per >= 80){
		printf("Grade B\n");
	} else if (per >= 70){
		printf("Grade C\n");
	} else if (per >= 60){
		printf("Grade D\n");
	} else {
		printf("Grade F\n");
	}

	return 0;

}

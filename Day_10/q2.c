// A program to display the day of the week based on a number(1 - 7)

#include <stdio.h>

int main(){
	int choice;

	// take user input for number
	printf("Enter a number: ");
	scanf("%d", &choice);

	// Implement switch case
	switch (choice) {
		case 1:
			printf("Monday");
			break;
		case 2: 
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thrusday");
			break;
		case 5: 
			printf("Friday");
			break;
		case 6: 
			printf("Saturday");
			break;
		case 7: 
			printf("Sunday");
			break;
		default:
			printf("Invalid choice");
	}

	return 0;

}

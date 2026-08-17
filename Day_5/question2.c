#include <stdio.h>

int main(){
	int totalSeconds, hours, minutes, seconds;

	// Take input from the user
	printf("Enter time in seconds: ");
	scanf("%d", &totalSeconds);

	// Convert 
	hours = totalSeconds /  3600;
	totalSeconds = totalSeconds % 3600;
	
	minutes = totalSeconds / 60;
	seconds = totalSeconds % 60;
	
	// Display the result
	printf("%d:%d:%d\n", hours, minutes, seconds);

	return 0;
}



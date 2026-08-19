// A program to check the entered character is vowel or consonant 

#include <stdio.h>

int main(){
	char ch;

	// Take input from the user 
	printf("Enter any character: ");
	scanf("%c", &ch);

	// Check whether it's vowel or consonant 
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
		printf("Vowel\n");
	} else {
		printf("Consonant\n");
	}

	return 0;
} 

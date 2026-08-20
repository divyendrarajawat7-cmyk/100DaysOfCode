// A program to input a character and check whether it's an upper case alphabet or lowercase alphabet, digit, or special character

#include <stdio.h>

int main(){
	char ch;

	// Take user input 
	printf("Enter any character: ");
	scanf("%c", &ch);

	// Run conditional statements to check the above conditions 
	if(ch >= 'A' && ch <= 'Z'){
		printf("Uppercase alphabet\n");
	} else if(ch >= 'a' && ch <= 'z'){
		printf("Lowercase alphabet\n");
	} else if(ch >= '0' && ch <= '9'){
		printf("Digit\n");
	} else{
		printf("Specail character\n");
	}
	
	return 0;
}



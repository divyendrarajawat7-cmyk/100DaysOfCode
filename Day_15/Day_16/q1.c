// A program to print the  binary equivalent of a number 

#include <stdio.h>

int main(){
	int n, binary[32], i = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	// Special case for 0
	if(n == 0){
		printf("Binary = 0\n");
		return 0;
	}

	// Convert binary into decimal 
	while(n >0){
		binary[i] = n % 2;
		n = n / 2;
		i ++;
	}

	// Print the binary in reverse order 
	printf("Binary = ");
	for(int j = i - 1; j >= 0; j --){
		printf("%d", binary[j]);
	}

	printf("\n");

	return 0;
}

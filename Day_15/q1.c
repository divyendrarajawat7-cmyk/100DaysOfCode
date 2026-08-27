// A ptogram to print the factorial of a number 

#include <stdio.h>

int main(){
	int n;
	unsigned long long fact = 1;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		fact = fact * i;
	}
	printf("Factorial of a number %d  is: %llu \n", n, fact); 
	return 0;
}

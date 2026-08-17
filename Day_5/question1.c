// Write a program to calculate SI and CI for given Principal, rate and time

#include <stdio.h>
#include <math.h>

int main(){
	double principal, rate, time, Si, Ci, am;
	
	// Take user inputs for principal, rate and time
	printf("Enter the principal amount: ");
	scanf("%lf", &principal);
	printf("Enter the rate of interest: ");
	scanf("%lf", &rate);
	printf("Enter the time: ");
	scanf("%lf", &time);

	// Calculate SI
	Si = (principal*rate*time)/100;
	
	// Calculate CI
	am = principal * pow((1 + rate / 100), time);
	Ci = am - principal; 

	// Display the results
	printf("Simple interest: %.2lf\n", Si);
	printf("Compound interest: %.2lf\n", Ci);

	return 0;
}

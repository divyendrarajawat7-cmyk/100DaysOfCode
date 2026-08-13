// A program to input two numbers and display their sum

#include <stdio.h>

int main(){
    int num1, num2, sum;

    //input the two numbers 
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate their sum
    sum = num1 + num2;

    // Display the result 
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
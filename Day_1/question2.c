// A program to take input of two numbers and display their sum, difference, product and quotient

#include <stdio.h>

int main(){
    int num1, num2, sum, difference, product, quotient;


    // take input for two numbers 
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate sum, difference, product and quotient
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    // division by zero check
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Exit the program with an error code
    }

    // Display the results
    printf("The sum of %d and %d is = %d\n", num1, num2, sum);
    printf("The difference of %d and %d is = %d\n", num1, num2, difference);
    printf("The product of %d and %d is = %d\n", num1, num2, product);
    printf("The quotient of %d and %d is = %d\n", num1, num2, quotient);

    return 0;
}
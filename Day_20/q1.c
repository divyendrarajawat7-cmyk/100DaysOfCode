// A program to find the product of all odd digits in a given number

#include <stdio.h>

int main(){
    int num, product = 1, digit, has_odd = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Process each digit of the number
    while(num != 0){
        digit = num % 10; // Get the last digit 
        if(digit % 2 != 0){
            product *= digit; // Multiply the odd digit with product
            has_odd = 1; // Set the flag to indicate that an odd digit was found
        }
        num /= 10; // Remove the last digit
    }

    // Output the result 
    if(has_odd){
        printf("The product of all odd digits is: %d\n", product);
    } else {
        printf("There are no odd digits in the number.\n");
    }

    return 0;
}
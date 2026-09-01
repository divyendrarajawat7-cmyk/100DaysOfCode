// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int binary, num, remainder, result = 0, place = 1;

    // Input a binary number from the user
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    num = binary;

    // Process each digit of the binary number
    while(num != 0) {
        remainder = num % 10; // Get the last digit
        if(remainder == 0) {
            result += 1 * place; // Change 0 to 1
        } else if(remainder == 1) {
            result += 0 * place; // Change 1 to 0
        } else {
            printf("Invalid binary number.\n");
            return 1; // Exit if the input is not a valid binary number
        }
        num /= 10; // Remove the last digit
        place *= 10; // Move to the next place value
    }

    // Output the result
    printf("The 1's complement of %d is: %d\n", binary, result);

    return 0;
    
}
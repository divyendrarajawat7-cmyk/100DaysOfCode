// A program to check whether a number is palindrome or not 

#include <stdio.h>

int main() {
    int n, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    // Check palindrome
    if (original == reverse)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is Not a Palindrome.\n", original);

    return 0;
}
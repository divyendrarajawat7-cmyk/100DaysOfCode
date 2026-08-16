// Swap two numbers without using a third variable 

#include <stdio.h>

int main() {
    int a, b;

    // Take input from the user 
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    // Values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
// A program to swap two variables using a third variable

#include <stdio.h>

int main() {
    int a, b, temp;

    // Take input from the user
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    // Values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using a third variable (temp)
    temp = a;
    a = b;
    b = temp;

    // Values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
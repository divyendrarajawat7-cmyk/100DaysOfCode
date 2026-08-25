// A program to implement a basic calculator using switch-case

#include <stdio.h>

int main() {
    int op;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Choose an arithmetic operation (+ -- 1, - -- 2, * -- 3, / -- 4): ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("Addition: %.2f\n", a + b);
            break;

        case 2:
            printf("Subtraction: %.2f\n", a - b);
            break;

        case 3:
            printf("Multiplication: %.2f\n", a * b);
            break;

        case 4:
            if (b != 0) {
                printf("Division: %.2f\n", a / b);
            } else {
                printf("Error: Cannot divide by zero.\n");
            }
            break;

        default:
            printf("Invalid operation\n");
    }

    return 0;
}

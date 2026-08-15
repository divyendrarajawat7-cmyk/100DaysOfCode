// A program to convert celcius to farhenite

#include <stdio.h>

int main() {
    float celcius, farhenite;

    // Take input from user (celcius)
    printf("Enter temperature in celcius: ");
    scanf("%f", &celcius);

    // Calculate farhenite
    farhenite = (celcius * 9 / 5) + 32;

    // Display the result
    printf("%.2f celcius to farhenite is: %.2f\n", celcius, farhenite);

    return 0;
}
// A program to print the following pattern

#include <stdio.h>

int main() {

    for (int i = 1; i <= 5; i++) {

        // Print spaces
        for (int j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // Print numbers
        for (int j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
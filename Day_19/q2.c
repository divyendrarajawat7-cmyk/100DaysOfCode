// A program to find the sum of digits of a number

#include <stdio.h>

int sum_of_digits(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits of %d is %d\n", num, sum_of_digits(num));
    return 0;
}

int sum_of_digits(int n) {
    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
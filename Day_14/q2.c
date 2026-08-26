// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main(){
    int n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i += 2){
        sum *= i;
    }

    printf("Product of even numbers from 1 to %d is %d\n", n, sum);
}
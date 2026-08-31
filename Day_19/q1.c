// A prorgram to find the LCM of two numbers using the formula LCM(a, b) = (a * b) / GCD(a, b)

#include <stdio.h>
// Function to find GCD of two numbers
int gcd(int a, int b);
// Function to find LCM of two numbers
int lcm(int a, int b);

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
    return 0;
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int gcd(int a, int b){
    if (b == 0){
        return a;
    } else {
        return gcd(b, a % b);
    }
}
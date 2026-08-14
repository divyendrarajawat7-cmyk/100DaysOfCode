// A program to calculate the area and perimeter of a rectangle taking input of their length and breadth from the user.

#include <stdio.h>

int main(){
    int l, b, area, peri;

    // take the user inputs 
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);

    // Calculate area and perimeter
    area = l * b;
    peri = 2 * (l + b);

    // Display the results
    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d\n", peri);

    return 0; 
}
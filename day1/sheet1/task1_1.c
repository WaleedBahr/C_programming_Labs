// 1-Write a program that computes the area of a square.
#include <stdio.h>
int main() {
    float side;

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    float area = side * side;

    printf("The area of the square is: %3.2f\n", area);

}
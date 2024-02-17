// 4-Write a program that computes the area of a triangle.
#include <stdio.h>

int main() {
    float base, height;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    float area = 0.5 * base * height;

    printf("The area of the triangle is: %f\n", area);

   
}
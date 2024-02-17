// 3-Write a program to find the area of a circle.
#include <stdio.h>

int main() {
    float radius;
    const float t=3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area =  t * radius * radius;

    printf("The area of the circle is: %f\n", area);

}
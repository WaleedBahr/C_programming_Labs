// 5-Write a program that computes the sum of two integer numbers.
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;

    printf("The sum of the two numbers is: %d\n", sum);

}
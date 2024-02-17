////7-Write a program to determine number odd or even.
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    (number % 2 == 0) ? printf("%d is Even\n",number) :
    printf("%d is Odd\n",number);

}

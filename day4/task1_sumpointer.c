//Write a program in C to add two integer numbers using pointers to integers.
#include <stdio.h>
void main(void) {
    int x;
    int y;
    int *ptr1;
    int *ptr2;
    int sum;
    printf("Enter the first number : ");
    scanf("%d",&x);
    printf("Enter the second number : ");
    scanf("%d",&y);
     ptr1=&x;
     ptr2=&y;
     sum=*ptr1+*ptr2;

    printf("Sum of the two integers= %d\n", sum);
}

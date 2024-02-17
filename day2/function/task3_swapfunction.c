#include <stdio.h>
void swap(int x, int y);
void main(void)
{
int x, y;
    printf("Enter the First number:\n");
    scanf("%d",&x);
    printf("Enter the second number:\n");
    scanf("%d",&y);
    swap(x,y);
}
void swap(int a, int b)
{
int temp;
temp =a;
a= b;
b = temp;
    printf("first number after swap is %d \n",a);
    printf("second number after swap is %d \n",b);
}

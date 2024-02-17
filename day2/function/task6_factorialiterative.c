#include<stdio.h>
int factorial(int);
void main(void){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("the factorial of the number = %d",factorial(num));
}
int factorial(int num){
    int fact=1;
    for (int i=1;i<=num;i++)
        fact*=i;
    return fact;
}


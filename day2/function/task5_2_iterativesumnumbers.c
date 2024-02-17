#include<stdio.h>
int sum_numbers(int);
void main(void){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    printf("sum of natural numbers = %d",sum_numbers(num));
}
int sum_numbers(int num){
    int sum=0;
    for(int i=1;i<=num;i++)
        sum+=i;
    return sum;
}

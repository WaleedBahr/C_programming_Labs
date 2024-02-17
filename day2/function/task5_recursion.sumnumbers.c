#include<stdio.h>
int sum_number(int);

void main(void){
    int num;
    printf("Enter number : " );
    scanf("%d",&num);
    printf("sum of natural numbers = %d",sum_number(num));
}
int sum_number(int num){
    if(num==1)
        return 1;
    return num+sum_number(num-1);
}

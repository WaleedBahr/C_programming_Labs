#include<stdio.h>
int fact(int);
void main(void){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("the factorial = %d",fact(num));
}
int fact(int num){
    if(num==1)
        return 1;
    return num *fact(num-1);
}



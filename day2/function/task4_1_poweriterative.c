#include<stdio.h>

int power(int,int);
void main(void){
    int number,power;
    printf("Enter the number :");
    scanf("%d",&number);
    printf("what is the power?");
    scanf("%d",&power);
    printf("the result = %d",power_number(number,power));
}
int power_number(int num,int base){
    int result=1;
    for (int i=0;i<base;i++)
        result*=num;
    return result;
}

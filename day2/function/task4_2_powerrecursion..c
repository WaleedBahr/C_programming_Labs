#include<stdio.h>
int power(int ,int );
void main(void){
    int num,pow;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("what is power of this number ? ");
    scanf("%d",&pow);
    printf("the result = %d",power(num,pow));
}
int power(int num,int pow){
    if(pow==0)
        return 1;
    return num *power(num,pow-1);
}



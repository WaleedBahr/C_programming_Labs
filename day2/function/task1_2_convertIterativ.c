#include<stdio.h>
#include<math.h>
int convertIterativ(int);
void main(void){
    int num;
 printf("Enter the decemal number  : ");
scanf("%d",&num);
printf("Binary number  is : %d",convertIterativ(num));
}
int convertIterativ(int num){
    int binary_number=0;
    int remend=0;
    int power =1;
    while(num>0){
    remend=num%2;    
    num/=2;
    binary_number+=remend*power;
    power *= 10;
    }
    return binary_number;
}


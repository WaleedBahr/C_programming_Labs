#include <stdio.h>
void convertRecursive(int);
void main(void){
int number;
printf("Enter the number to convert : ");
scanf("%d",&number);
printf("Binary number of %d is : ",number);
convertRecursive(number);

}

void convertRecursive(int n){

    if(n>0)
    {
        convertRecursive(n/2);
        printf("%d",n%2);
    }



}

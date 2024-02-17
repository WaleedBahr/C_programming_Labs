//Write a program in C to swap elements using function by call by reference.
#include <stdio.h>
void swap(int *ptr1,int*ptr2);
void main(void) {
    int number1;
    int number2;

    printf("number 1 befor swap = ");
    scanf("%d",&number1);
    printf("number 2 befor swap  = ");
    scanf("%d",&number2);
    swap(&number1,&number2);
    printf("number 1 after swap= %d \n",number1);
    printf("number 2 after swap= %d \n",number2);
    }
void swap(int *ptr1,int*ptr2){
    int temp= *ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}



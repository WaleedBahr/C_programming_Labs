#include<stdio.h>
int sum_numbers(int arr[],int size);
void main (void){
    int x;
    int result;

printf("Enter the size of the array: ");
    scanf("%d", &x);
    int arr[x];

    for (int i = 0; i < x; i++) {
      printf("Enter the elements of the array [i] = ",i+1);
        scanf("%d", &arr[i]);
    }
    result=sum_numbers(arr,x);
    printf("the sum of element in array = %d\n",result);
}
int sum_numbers(int arr[],int size){
    if(size==1)
       return arr[0];
       else
    return arr[size-1]+sum_numbers(arr,size-1);
}


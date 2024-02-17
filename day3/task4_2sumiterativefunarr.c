#include<stdio.h>
int sum (int a[],int size);
void main (void){
    int x;
    int r1;
printf("Enter the size of the array: ");
    scanf("%d", &x);
    int arr[x];

    for (int i = 0; i < x; i++) {
      printf("Enter the elements of the array [i] = ",i+1);
        scanf("%d", &arr[i]);
    }
    r1=sum(arr,x);
    printf("the sum of element in array = %d\n",r1);
}
int sum (int a[],int size){
int s=0;
for(int i=0 ; i<size ; i++){
  s+=a[i];
}
return s;
}


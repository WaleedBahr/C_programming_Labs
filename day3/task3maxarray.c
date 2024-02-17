#include<stdio.h>
#include<limits.h>

void main (void){
    int x;
    int r1;
    int r2;
printf("Enter the size of the array: ");
    scanf("%d", &x);
    int arr[x];

    for (int i = 0; i < x; i++) {
      printf("Enter the elements of the array [i] = ",i+1);
        scanf("%d", &arr[i]);
    }
    r1=sum(arr,x);
    r2=max(arr,x);
    printf("the sum of element in array = %d\n",r1);
    printf("the max number of array = %d\n ",r2);

}
int sum (int a[],int size){
int s=0;
for(int i=0 ; i<size ; i++){
  s+=a[i];
}
return s;
}
int max (int b[],int n){
int m=INT_MIN;
for(int i=1 ; i<n ; i++){
        if(b[i]>m)
        m=b[i];
}
return m;
}

#include <stdio.h>
void main(void) {
    int size, i, search_val,pos;

 printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++) {
        printf("Enter the elements of the array:[%d] = ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to search: ");
    scanf("%d", &search_val);
    pos=binarySearchRecursive(arr,0,size-1,search_val);
    if(pos==-1)
       printf("%d is not located at the data ",search_val);
    else
       printf("%d is located at position %d ",search_val,pos);
}
int binarySearchRecursive(int arr[], int lower,int upper, int key)
{

 if(lower<=upper)
  {
    int mid=(lower+upper)/2;
    if(arr[mid]==key)
     return mid;
     else if(arr[mid]<key)
   return binarySearchRecursive(arr,mid+1,upper,key);
     else
   return binarySearchRecursive(arr,lower,mid-1,key);
  }
  return -1;
}

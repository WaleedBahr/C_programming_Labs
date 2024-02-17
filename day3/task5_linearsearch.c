#include <stdio.h>
int linearSearch(int arr[], int size, int key);
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
    pos=linearSearch(arr,size,search_val);
    if(pos==-1)
       printf("%d is not located at the data ",search_val);
    else
       printf("%d is located at position %d ",search_val,pos);
}
int linearSearch(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {
  if(arr[i]==key)
  {
    key=i;
    return i;
  }}
  return -1;
}

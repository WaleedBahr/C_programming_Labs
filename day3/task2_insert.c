#include <stdio.h>

void main(void) {
    int size, i,newValue,pos;

 printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++) {
        printf("Enter the sorted elements of the array:[%d] = ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the new value to insert: ");
    scanf("%d", &newValue);
    printf("what is position of new value ? ");
    scanf("%d", &pos);
    for (i=size ; i>=pos ; i--)
    {
      arr[i+1]=arr[i];   
    }
     arr[pos]=newValue;
     size++;
    printf("array after inserted : \n");
    for (i = 0; i < size; i++) 
    {
      printf("%d\n",arr[i]);

    }
}


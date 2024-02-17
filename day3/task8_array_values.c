#include <stdio.h>

void main(void) {
    int size, i;

 printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++) {
        printf("Enter the elements of the array:[%d] = ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("data stored in array are \n");
    for (i = 0; i < size; i++) 
    {
      printf("%d\n",arr[i]);
    }


}

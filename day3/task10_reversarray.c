#include <stdio.h>

void main(void) {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nReverse array: ");
    for (i = size-1; i >=0; i--) {
     printf("%d ", arr[i]);;
    }
    }




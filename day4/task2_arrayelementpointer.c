//Write a program in C to store n elements in an array and print the elements using pointer.
#include <stdio.h>
void main(void) {
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int *ptr = arr; 

    for (i = 0; i < size; i++) {
        printf("Enter the elements of the array [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        printf("array element number %d = %d \n", i + 1, *ptr++);
    }
    printf("==========================\n");
    printf("array element are : \n");
     for (i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
}
}

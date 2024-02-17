//Write a program in C to store n elements in dynamic array and get the maximum elements using pointer.
#include<stdio.h>
#include<limits.h>
int main() {
    int size, i;
    int max;
    max=INT_MIN;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    //int arr[size]; //fixsed size in memory
    int *arr = (int *)malloc(size * sizeof(int));// Dynamic size in memory
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
     max = *ptr;

    for (i = 1; i < size; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    printf("Maximum element in the array = %d\n", max);

}

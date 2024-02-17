#include <stdio.h>
void bubbleSort(int arr[], int size);
void main(void) {
    int size, i;

 printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++) {
        printf("Enter the elements of the array:[%d] = ",i+1);
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr,size);
    printf("data after sorted \n");
    for (i = 0; i < size; i++)
    {
      printf("%d\n",arr[i]);
    }


}
void bubbleSort(int arr[], int size)
{
  for (  int i= 0; i < size-1 ; i++)
  {
        if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
  }
}
}

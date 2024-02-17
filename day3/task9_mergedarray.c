#include <stdio.h>
void main(main) {
    int size1, size2, i, j;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    int arr3[size1 + size2];
    for (i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }

    for (j = 0; j < size2; j++) {
        arr3[i + j] = arr2[j];
    }
    printf("\nArray After Merged:\n");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", arr3[i]);
    }

}

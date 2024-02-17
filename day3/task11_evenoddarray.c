#include <stdio.h>

void main(void) {
    int size, i, count_even = 0, count_odd = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++) {
        printf("Enter the elements of the array:[%d] = ",i+1);
        scanf("%d", &arr[i]);
    }

    int oddArr[size];
    int evenArr[size];
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[count_even++] = arr[i];
        } else {
            oddArr[count_odd++] = arr[i];
        }
    }
    printf("the Original array : ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }


    printf("\nEven integers: ");
    for (i = 0; i < count_even; i++) {
        printf("%d ", evenArr[i]);
    }
    printf("\nOdd integers: ");
    for (i = 0; i < count_odd; i++) {
        printf("%d ", oddArr[i]);
    }

}

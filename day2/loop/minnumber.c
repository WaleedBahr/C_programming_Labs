#include <stdio.h>
#include <limits.h>
void main(void) {
    int n, number, min;

    printf("Enter the number of integers: ");
    scanf("%d", &n);
    min = INT_MAX;
    for (int i = 1; i <= n; ++i) {
        printf("Enter integer %d: ", i);
        scanf("%d", &number);

        if (number < min) {
            min = number;
        }
    }
    printf("The minimum number is: %d\n", min);
}

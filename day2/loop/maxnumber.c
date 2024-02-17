#include <stdio.h>
#include <limits.h>
void main(void) {
    int n, number, max;

    printf("Enter the number of integers: ");
    scanf("%d", &n);
    max = INT_MIN;
    for (int i = 1; i <= n; ++i) {
        printf("Enter integer %d: ", i);
        scanf("%d", &number);

        if (number > max) {
            max = number;
        }
    }
    printf("The maximum number is: %d\n", max);
}

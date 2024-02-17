#include <stdio.h>
#include <limits.h>

void main(void) {
    int n, number;
    int min1 = INT_MAX, min2 = INT_MAX; 
    int max1 = INT_MIN, max2 = INT_MIN;  
    printf("Enter the number of positive integers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        printf("Enter positive integer %d: ", i);
        scanf("%d", &number);
        if (number > 0) {
            if (number < min1) {
                min2 = min1;  
                min1 = number;  
            } else if (number < min2) {
                min2 = number; 
            }
            if (number > max1) {
                max2 = max1;  
                max1 = number;  
            } else if (number > max2) {
                max2 = number;  
            }
        } else {
            printf("Please enter a positive integer.\n");
            --i;  
        }
    }

    int range = max2 - min2;
    printf("The second smallest positive value is: %d\n", min2);
    printf("The second largest positive value is: %d\n", max2);
    printf("The range of the numbers without the two extreme values is %d\n", range);

  
}

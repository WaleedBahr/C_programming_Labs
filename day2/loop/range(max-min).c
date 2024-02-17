#include <stdio.h>
#include <limits.h>
void main(void) {
    int n;
    float number, min, max;
    printf("Enter the number of floats: ");
    scanf("%d", &n);
     min = INT_MAX;
     max = INT_MIN;
    for (int i = 1; i <= n; ++i) {
        printf("Enter float %d: ", i);
        scanf("%f", &number);
        if (number < min) {
            min = number;
        }
        else if (number > max) {
            max = number;
        }
        else
        printf("invalid");
    }
    float range = max - min;
    printf("The range of the floats is: %.3f\n", range);

}

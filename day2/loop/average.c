#include <stdio.h>
void main(void) {
    int n;
    float avg;
    int number;
    int sum=0;

    printf("Enter the number of intgers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        printf("Enter integer %d: ", i);
        scanf("%d", &number);
        sum+=number;
        }
     avg=(float)sum/n;
     printf("The average of the integers is: %.2f\n",avg);
}

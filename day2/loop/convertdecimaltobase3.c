#include <stdio.h>

void main(void) {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    if (decimalNumber < 0) {
        printf("Negative numbers are not supported.\n");
        return 1; 
    }
    printf("The number in base 3 is: ");
    do {
        int remainder = decimalNumber % 3;
        printf("%d", remainder);
        decimalNumber = decimalNumber / 3;
    } while (decimalNumber > 0);

    printf("\n");

}

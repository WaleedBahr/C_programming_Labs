// 6-Write a program determine number positive or negative or zero.
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    (number > 0) ? printf("%d is Positive\n",number) :
    (number < 0) ? printf("%d is Negative\n",number) : 
    printf("%d is Zero\n",number);

}
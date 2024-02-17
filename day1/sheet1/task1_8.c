// 8-Write a program to pay amount to customer using fewest number of coins. Given currency denominations: 1, 5, 10, 25, 50.
#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    int num50 = amount / 50;
    amount %= 50;
    int num25 = amount / 25;
    amount %= 25;
    int num10 = amount / 10;
    amount %= 10;
    int num5 = amount / 5;
    amount %= 5;
    int num1 = amount;
    printf("Pay %d coins of 50\n", num50);
    printf("Pay %d coins of 25\n", num25);
    printf("Pay %d coins of 10\n", num10);
    printf("Pay %d coins of 5\n", num5);
    printf("Pay %d coins of 1\n", num1);
    
}
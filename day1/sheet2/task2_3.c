// 4-Write a program to get an integer number and convert to amount text between 0.999 
#include <stdio.h>

int main() {
    int amount;

    // Input from the user
    printf("Enter an integer amount (0-99): ");
    scanf("%d", &amount);

    if (amount < 0 || amount > 99) {
        printf("Invalid input. Please enter a number between 0 and 99.\n");
        return 1; // Exit with an error code
    }

    printf("Amount in words: ");

    if (amount % 100 >= 10 && amount % 100 <= 19) {
        switch (amount % 100) {
            case 10: printf("Ten "); break;
            case 11: printf("Eleven "); break;
            case 12: printf("Twelve "); break;
            case 13: printf("Thirteen "); break;
            case 14: printf("Fourteen "); break;
            case 15: printf("Fifteen "); break;
            case 16: printf("Sixteen "); break;
            case 17: printf("Seventeen "); break;
            case 18: printf("Eighteen "); break;
            case 19: printf("Nineteen "); break;
        }
    } else {
        switch (amount % 100 / 10) {
            case 2: printf("Twenty "); break;
            case 3: printf("Thirty "); break;
            case 4: printf("Forty "); break;
            case 5: printf("Fifty "); break;
            case 6: printf("Sixty "); break;
            case 7: printf("Seventy "); break;
            case 8: printf("Eighty "); break;
            case 9: printf("Ninety "); break;
        }

        switch (amount % 10) {
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }
    }

  
}
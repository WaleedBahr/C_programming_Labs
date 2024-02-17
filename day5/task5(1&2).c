/*C program that creates a structure to store customer information (name, account number, and balance) and includes two functions:
 one to print the names of customers with a balance less than $200, and another to
 add $100 to the balance of customers with more than $1000 and print the updated balances:*/
#include <stdio.h>
#include <string.h>
typedef struct {
    char name[50];
    int account_number;
    double balance;
} Customer;

// Function to print names of customers with balance less than $200
void printNamesWithLowBalance(Customer customers[], int size) {
    int found = 0;
    printf("Names of customers with balance less than $200:\n");
    for (int i = 0; i < size; i++) {
        if (customers[i].balance < 200.0) {
            printf("%s\n", customers[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("There are no customers with balance less than $200\n");
    }
}

// Function to add $100 to the balance of customers with more than $1000 and print updated balances
void addHundredToHighBalances(Customer customers[], int size) {
    int found = 0;
    printf("\nAdding $100 to the balance of customers with more than $1000:\n");
    for (int i = 0; i < size; i++) {
        if (customers[i].balance > 1000.0) {
            customers[i].balance += 100.0;
            printf("%s - New Balance: $%.2f\n", customers[i].name, customers[i].balance);
            found = 1;
        }
    }
    if (!found) {
        printf("There are no customers with balance more than $1000\n");
    }
}

int main() {
    int n;
    printf("Enter the number of customers: ");
    scanf("%d", &n);
    Customer customers[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for customer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Account Number: ");
        scanf("%d", &customers[i].account_number);
        printf("Balance: $");
        scanf("%lf", &customers[i].balance);
        printf("===============================\n");
    }

    printNamesWithLowBalance(customers, n);

    addHundredToHighBalances(customers, n);

    return 0;
}







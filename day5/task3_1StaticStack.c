/*Write a C program to create Stack data structure, collection of items of the same type. 
Stack follows the Last in First Out (LIFO) fashion wherein the last element entered is the first one to be popped out. 
In stacks, the insertion (push) and deletion (pop) of elements happen only at one endpoint of it.
Represent the stack as static array*/
#include <stdio.h>
#define MAX_SIZE 10
typedef struct {
    int items[MAX_SIZE];
    int top;
} StaticStack;

void staticPush(StaticStack* stack, int value) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack->items[++(stack->top)] = value;
}

int staticPop(StaticStack* stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->items[(stack->top)--];
}

void main(void) {
    StaticStack staticStack;
    staticStack.top = -1;

    int choice, value;

    do {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf(" %d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf(" %d", &value);
                staticPush(&staticStack, value);
                break;
            case 2:
                value = staticPop(&staticStack);
                if (value != -1) {
                    printf("Static Stack Pop: %d\n", value);
                }
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }

        printf("Static Stack elements are: ");
        for (int i = staticStack.top; i >= 0; i--) {
            printf("%d ", staticStack.items[i]);
        }
        printf("\n");

    } while (choice != 3);
}

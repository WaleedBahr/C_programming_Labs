/*Write a C program to create Stack data structure, collection of items of the same type.
Stack follows the Last in First Out (LIFO) fashion wherein the last element entered is the first one to be popped out.
In stacks, the insertion (push) and deletion (pop) of elements happen only at one endpoint of it.
Represent the stack as dynamic array using pointer*/
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int* items;
    int top;
} DynamicStack;

void dynamicInitialize(DynamicStack* stack, int capacity) {
    stack->items = (int*)malloc(sizeof(int) * capacity);
    stack->top = -1;
}

void dynamicPush(DynamicStack* stack, int value) {
    // Assuming no dynamic resizing for simplicity
    stack->items[++(stack->top)] = value;
}

int dynamicPop(DynamicStack* stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->items[(stack->top)--];
}

void dynamicFree(DynamicStack* stack) {
    free(stack->items);
}

void main(void) {
    DynamicStack dynamicStack;
    int choice, value, capacity;

    printf("Enter the capacity of the dynamic stack: ");
    scanf("%d", &capacity);

    dynamicInitialize(&dynamicStack, capacity);

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
                dynamicPush(&dynamicStack, value);
                break;
            case 2:
                value = dynamicPop(&dynamicStack);
                if (value != -1) {
                    printf("Dynamic Stack Pop: %d\n", value);
                }
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }

        printf("Dynamic Stack elements are: ");
        for (int i = dynamicStack.top; i >= 0; i--) {
            printf("%d ", dynamicStack.items[i]);
        }
        printf("\n");

    } while (choice != 3);

    dynamicFree(&dynamicStack);

}

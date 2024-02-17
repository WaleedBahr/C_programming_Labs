/*Write a C program to create Stack data structure, collection of items of the same type.
Stack follows the Last in First Out (LIFO) fashion wherein the last element entered is the first one to be popped out.
In stacks, the insertion (push) and deletion (pop) of elements happen only at one endpoint of it.
Represent the stack as linked list using struct and pointers*/
#include <stdio.h>
#include <stdlib.h>
// Node structure for each element in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Stack structure with a pointer to the top of the stack
typedef struct {
    Node* top;
} LinkedListStack;

// Function to push a value onto the linked list stack
void linkedListPush(LinkedListStack* stack, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
}

// Function to pop a value from the linked list stack
int linkedListPop(LinkedListStack* stack) {
    if (stack->top == NULL) {
        printf("Stack Underflow\n");
        exit(1);
    }
    Node* temp = stack->top;
    int value = temp->data;
    stack->top = temp->next;
    free(temp);
    return value;
}

// Function to free the memory used by the linked list stack
void linkedListFree(LinkedListStack* stack) {
    while (stack->top != NULL) {
        Node* temp = stack->top;
        stack->top = temp->next;
        free(temp);
    }
}

void main(void) {
    LinkedListStack linkedListStack;
    linkedListStack.top = NULL;

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
                linkedListPush(&linkedListStack, value);
                break;
            case 2:
                value = linkedListPop(&linkedListStack);
                printf("Linked List Stack Pop: %d\n", value);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }

        printf("Linked List Stack elements are: ");
        Node* current = linkedListStack.top;
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");

    } while (choice != 3);

    // Free dynamically allocated memory
    linkedListFree(&linkedListStack);
}

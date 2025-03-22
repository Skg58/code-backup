#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct stack {
    int data;
    struct stack* next;
};

void traversal(struct stack* top) {
    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}
struct stack* push(struct stack* top) {
    struct stack* newnode = (struct stack*)malloc(sizeof(struct stack));
    printf("Enter data of newnode\n");
    scanf("%d", &(newnode->data));
    newnode->next = NULL;
    if (newnode == NULL) {
        printf("Stack is Overflow");
    } else {
        newnode->next = top;
        top = newnode;
        return top;
    }
}

int pop(struct stack** ptr) {
    if (*(ptr) == NULL) {
        printf("Stack is Underflow");
    } else {
        int temp = (*ptr)->data;
        (*ptr) = (*ptr)->next;
        return temp;
    }
}
void search(struct stack* ptr, int key) {
    while (ptr != NULL) {
        if (ptr->data == key) {
            printf("key element is found\n");
            return;
        }
        ptr = ptr->next;
    }
}

void largestandsmallest(struct stack* ptr) {
    int largest = INT_MIN;
    int smallest = INT_MAX;

    while (ptr != NULL) {
        if (largest < ptr->data) {
            largest = ptr->data;
        }
        if (smallest > ptr->data) {
            smallest = ptr->data;
        }
        ptr = ptr->next;
    }
    printf("The largest element in stack is %d\n", largest);
    printf("The smallest element in stack is %d\n", smallest);
}

int main() {
    struct stack* top = NULL;

    top = push(top);
    top = push(top);
    top = push(top);
    top = push(top);
    struct stack* temp = top;
    traversal(temp);
    temp = top;
    largestandsmallest(temp);
    printf("Popped : %d\n", pop(&top));
    temp = top;
    traversal(temp);
    temp = top;
    search(temp, 12);

    return 0;
}
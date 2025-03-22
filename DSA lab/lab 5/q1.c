#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define N 5

int arr[N];
int top = -1;

void traversal() {
    for (int i = 0; i <= top; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void push(int x) {
    if (top + 1 == N) {
        printf("Stack is Overflow");
        return;
    } else {
        top++;
        arr[top] = x;
    }
}

int pop() {
    int temp;
    if (top == -1) {
        printf("Stack is Underflow");
    } else {
        temp = arr[top];
        top--;
        return temp;
    }
}
int searching(int num) {
    for (int i = 0; i <= top; i++) {
        if (num == arr[i]) {
            return i;
        }
    }
    return -1;
}

void largestandsmallest() {
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i <= top; i++) {
        if (largest < arr[i]) {
            largest = arr[i];
        }
        if (smallest > arr[i]) {
            smallest = arr[i];
        }
    }
    printf("The largest element in stack is %d\n", largest);
    printf("The smallest element in stack is %d\n", smallest);
}

int main() {
    push(10);
    push(11);
    push(12);
    push(13);
    traversal();
    largestandsmallest();

    printf("popped : %d\n", pop());
    printf("popped : %d\n", pop());
    traversal();
    printf("%d's index is : %d\n", 11, searching(11));

    return 0;
}
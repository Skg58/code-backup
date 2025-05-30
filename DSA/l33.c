#include <stdio.h>
#include <stdlib.h>
struct stack {
    int size;
    int top;
    char* arr;
};
int isEmpty(struct stack* ptr) {
    if (ptr->top == -1) {
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct stack* ptr) {
    if (ptr->top == ptr->size - 1) {
        return 1;
    } else {
        return 0;
    }
}
void push(struct stack* ptr, char val) {
    if (isFull(ptr)) {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack* tp) {
    if (isEmpty(tp)) {
        printf("Stack underflow");
    } else {
        char val = tp->arr[tp->top];
        tp->top--;
        return val;
    }
}

int parentthesischeck(char* exp) {
    struct stack* sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(') {
            push(sp, '(');
        } else if (exp[i] == ')') {
            if (isEmpty(sp)) {
                return 0;
            }
            pop(sp);
        }
    }

    if (isEmpty(sp)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char* exp = "(8)*--$$9)";
    if (parentthesischeck(exp)) {
        printf("Balanced Expression");
    } else {
        printf("UnBalanced Expression");
    }

    return 0;
}
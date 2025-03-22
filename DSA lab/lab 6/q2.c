#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int* op;
};

int operator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
        return 1;
    } else {
        return 0;
    }
}
void push(struct stack* sp, int c) {
    if (sp->top == sp->size - 1) {
        printf("Stack Overflow");
    } else {
        sp->top++;
        sp->op[sp->top] = c;
    }
}
int pop(struct stack* sp) {
    if (sp->top == -1) {
        printf("Stack Underflow");
    } else {
        int temp = sp->op[sp->top];
        sp->top--;
        return temp;
    }
}

int res(int o1, char c, int o2) {
    if (c == '+') {
        return o2 + o1;
    } else if (c == '-') {
        return o2 - o1;
    } else if (c == '*') {
        return o2 * o1;
    } else if (c == '/') {
        return o2 / o1;
    } else if (c == '^') {
        return pow(o2, o1);
    }
}

void calpostfix(char* str) {
    struct stack s;
    s.size = 50;
    s.top = -1;
    s.op = (int*)malloc(s.size * sizeof(int));
    int i = 0;
    int operand1 = 0, operand2 = 0, result = 0;
    while (str[i] != '\0') {
        if (!operator(str[i])) {
            int k = str[i] -'0';
            push(&s, k);
            i++;
        } else {
            operand1 = pop(&s);
            operand2 = pop(&s);
            result = res((operand1), str[i], (operand2));
            push(&s, result);
            i++;
        }
    }
    printf("%d", s.op[s.top]);
}

int main() {
    char str[] = "823^/23*+51*-";
    calpostfix(str);
    return 0;
}
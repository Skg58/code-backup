#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    char* op;
};

int operator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '(' ||
        c == ')') {
        return 1;
    } else {
        return 0;
    }
}
int precedence(char c) {
    if (c == '^') {
        return 3;
    }

    else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '+' || c == '-') {
        return 1;
    } else {
        return 0;
    }
}

int associtivaty(char c) {
    if (c == '^') {
        return 1;
    } else {
        return 0;
    }
}

void push(struct stack* sp, char c) {
    if (sp->top == sp->size - 1) {
        printf("stack Overflow");
    } else {
        sp->top++;
        sp->op[sp->top] = c;
    }
}
char pop(struct stack* sp) {
    if (sp->top == -1) {
        printf("stack Underflow");
    } else {
        if (sp->op[sp->top] != '(' || sp->op[sp->top] != ')') {
            char c = sp->op[sp->top];
            sp->top--;
            return c;
        } else {
            sp->top--;
        }
    }
}

void infixtopostfix(char* str) {
    struct stack s;
    s.top = -1;
    s.size = 50;
    s.op = (char*)malloc(s.size * sizeof(char));
    char prefix[100];
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        if (!operator(str[i])) {
            prefix[j] = str[i];
            i++;
            j++;
        }

        else if (str[i] == ')') {
            push(&s, str[i]);
            i++;
        } else if (str[i] == '(') {
            while (s.op[s.top] != ')') {
                prefix[j] = pop(&s);
                j++;
            }
            pop(&s);
            i++;
        }

        else if (precedence(str[i]) > precedence(s.op[s.top])) {
            push(&s, str[i]);
            i++;
        } else if (precedence(str[i]) < precedence(s.op[s.top])) {
            prefix[j] = pop(&s);
            j++;
        } else {
            if (!associtivaty(str[i])) {
                push(&s, str[i]);
                i++;

            } else {
                prefix[j] = pop(&s);
                j++;
            }
        }
    }

    while (s.top != -1) {
        prefix[j] = pop(&s);
        j++;
    }

    prefix[j] = '\0';
    for (int k = j - 1; k >= 0; k--) {
        printf("%c", prefix[k]);
    }
}

int main() {
    char str[] = "A+B*(C+D)/F+G*H+I-J/K*L+M";
    int n = sizeof(str) / sizeof(str[0]);
    char str1[n];
    for (int i = 0; i < n - 1; i++) {
        str1[i] = str[n - i - 2];
    }

    str1[n - 1] = '\0';
    infixtopostfix(str1);
    return 0;
}
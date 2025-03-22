#include<stdio.h>
struct operator {
int size1;
int top1;
char* s1;
};

struct operand {
int size2;
int top2;
int* s2;
};

void push1(struct operator* sp, char c) {
    if (sp->top1 == sp->size1 - 1) {
        printf("stack Overflow");
    } else {
        sp->top1++;
        sp->s1[sp->top1] = c;
    }
}

void pop1(struct operator* sp) {
    if (sp->top1 == -1) {
        printf("stack Underflow");
    } else {
        if (sp->s1[sp->top1] != '(') {
            printf("%c", sp->s1[sp->top1]);
        }
        sp->top1--;
    }
}

void push2(struct operand* sp, int c) {
    if (sp->top2 == sp->size2 - 1) {
        printf("stack Overflow");
    } else {
        sp->top2++;
        sp->s2[sp->top2] = c;
    }
}

void pop2(struct operand* sp) {
    if (sp->top2 == -1) {
        printf("stack Underflow");
    } else {
        if (sp->s2[sp->top2] != '(') {
            printf("%c", sp->s2[sp->top2]);
        }
        sp->top2--;
    }
}



void cal(char * str){
    struct  operator op1;
    op1.size1=20;
    op1.top1=-1;
    op1.s1=(char *)malloc(op1.size1*sizeof(char));

    struct  operand op2;
    op2.size2=20;
    op2.top2=-1;
    op2.s2=(int *)malloc(op2.size2*sizeof(int));


    }
int main(){
    char str[]="8+2*10/1+6+5-2/6*9";
    float k=8+2*10/1+6+5-2/6*9;
    printf("%.0f",k);
    


    return 0;
}
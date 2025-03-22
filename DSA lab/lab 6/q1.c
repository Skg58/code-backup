#include<stdio.h>
#include<stdlib.h>

struct stack {
int size;
 int top;
 char * op;
};

 int operator(char c){
    if (c=='+'||c=='-'||c=='*'||c=='/'||c=='^'||c=='('||c==')')
    {
        return 1;
    }
    else{
        return 0;
    }
    
 }
 int precedence(char c){
    if (c=='^')
    {
         return 3;
    }
    
   else  if (c=='*'||c=='/')
    {
        return 2;
    }
    else if (c=='+'||c=='-')
    {
        return 1;
    }
    else{
        return 0;
    }

 }

int associtivaty(char c){
    if (c == '^')
    {
       return 1;
    }
    else{
        return 0;
    }
    

}

void push (struct stack * sp,char c){
    if (sp->top==sp->size-1)
    {
       printf("stack Overflow");
    }
    else
    {
       sp->top++;
       sp->op[sp->top]= c;
    }
}
void pop (struct stack * sp){
    if (sp->top==-1)
    {
       printf("stack Underflow");
    }
    else
    {
          if(sp->op[sp->top]!='('){
          printf("%c",sp->op[sp->top]);
          }
       sp->top--;
    }
}

void infixtopostfix(char * str){
    struct stack s ;
    s.top=-1;
    s.size=50;
    s.op=(char*)malloc(s.size*sizeof(char));
    int i =0;
    while(str[i]!='\0'){
          if(!operator(str[i])){
            printf("%c",str[i]);
            i++;
         }
         
        else  if(str[i]=='('){
            push(&s,str[i]);
            i++;
         }
         else if(str[i]==')'){
            while(s.op[s.top] !='('){
                pop(&s);
            }
           pop(&s);
           i++;
         }
      

         else if(precedence(str[i])>precedence(s.op[s.top])){
            push(&s,str[i]);
            i++;
         }
         else if(precedence(str[i])<precedence(s.op[s.top])){
            pop(&s);
         }
         else{
            if(!associtivaty(str[i])){
                pop(&s);
            }
            else{
                push(&s,str[i]);
                i++;
            }
         }
    }

    while (s.top!=-1)
    {
       pop(&s);
    }
    
}

int main(){
    char str[]="A+B*(C+D)/F+G*H+I-J/K*L+M";
    // char str[]="A^B+C^D";
    infixtopostfix(str);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#define N 10
 int a2[N];
 int f1 =-1,f2=-1,r1=-1,r2=-1;
 
 
struct stack {
  int a1[N];
 };

 void display(struct stack*ptr){
for(int i =f1;i<=r1;i++){


printf("%d ",ptr->a1[i]);

}
printf("\n");
}

 
 void insertion(int x,struct stack*ptr){
  if(r1==N-1)// IsFull condition
   {
   printf("Queue Overflow");
   }
   else if(f1==-1){
    f1=r1=0;
   ptr->a1[r1]=x;
    }
    else{
    r1++;
    ptr->a1[r1]=x;
    }
}

void deletion(){

       for(int i =r1 ;i>=f1;i++ ,r2++){
         if(r1==-1){
                     
                     }
         a2[r2]=a[i];
       }

}
 
 int main(){
 struct stack *s=(struct stack *)malloc(sizeof(struct stack));;
 insertion(10,s);
 insertion(11,s);
 insertion(12,s);
 insertion(13,s);
 display(s);
 
 
 }
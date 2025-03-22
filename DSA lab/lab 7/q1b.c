#include<stdio.h>
#include<stdlib.h>

struct queue {
 int data;
 struct queue * next;
 };
 struct queue *front= NULL;
 struct queue *rear= NULL;
   
   void display(){
   struct queue * temp =NULL;
   for(temp = front;temp!= NULL;temp = temp->next){
     printf("%d " , temp->data);
   } 
   printf("\n");
   }
   
   
   
   void insertion(int x){
     struct queue * newnode=(struct queue *)malloc(sizeof(struct queue));
     newnode->data= x;
     newnode->next = NULL;
     if(newnode ==NULL){
     printf("Queue Overflow");
     }
     else if(rear==NULL){
      front =rear=newnode;
     }
     else{
     rear ->next = newnode;
     rear = newnode;
     }
   }
 
 
  void deletion(){
    
    if(front==rear){
      front = rear = NULL;
    }
    else{
    struct queue * temp =NULL;
    temp = front;
    front =front->next;
    free(temp);
    }

  }
 
 
 
 int main(){
 
 
   insertion(75);
   insertion(76);
   insertion(77);
   insertion(78);
   display();
   deletion();
   deletion();
   display();
   
        
 }
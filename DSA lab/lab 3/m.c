#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* prev;
struct node*next;

};

int main(){

struct node *head = NULL;
int input = 1;
struct node * temp;
struct node * newnode;
while(input){
 newnode =(struct node*)malloc(sizeof(struct node));
printf("Enter data of new node\n");
scanf("%d", &newnode->data);
newnode->prev= NULL;
newnode->next= NULL;
if(head==NULL){
head=temp=newnode;
}
else{
temp->next = newnode;
newnode->prev= temp;
temp = newnode;
}
printf("do you want to insert a new node??\n");
scanf("%d",&input);

}


newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data of Inserting node\n");
scanf("%d", &newnode->data);
newnode->prev= NULL;
newnode->next= NULL;


// insert at beg
/*newnode->next = head;
head->prev =  newnode;
head = newnode;*/

// insert at end
/*newnode->prev = temp;
temp->next = newnode;
temp = newnode;*/

// insertion at the given position 
int position;
printf("Enter position\n");
scanf("%d", &position);
int i =1;
temp = head;
while(i<position-1){
  temp = temp ->next;
  i++;
}
newnode->next = temp->next;
newnode->next->prev = newnode;
temp->next =newnode;
newnode->prev = temp;

// insertion after the given position 
/*int position;
printf("Enter position\n");
scanf("%d", &position);
int i =1;
temp = head;
while(i<position){
  temp = temp ->next;
  i++;
}
newnode->next = temp->next;
newnode->next->prev = newnode;
temp->next =newnode;
newnode->prev = temp;*/




// for printing all data
temp = head;
while(temp!=NULL){
printf("%d\n",temp->data);
temp = temp ->next;
}



return 0;
}
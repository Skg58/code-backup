#include<stdio.h>
#define N 10
int arr[N];
int f =-1;
int r=-1;


void display(){
for(int i =f;i<=r;i++){


printf("%d ",arr[i]);

}
printf("\n");
}


void insertion(int x){
  if(r==N-1)// IsFull condition
   {
   printf("Queue Overflow");
   }
   else if(f ==-1){
    f=r=0;
    arr[r]=x;
    }
    else{
    r++;
    arr[r]=x;
    }
}
void deletion(){
   if(f==-1)// IsEmpty condition
   {
   printf("Queue Underflow");
   }
   else if(r ==0){
    f=r=-1;
    }
   else{
   f++;
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




return 0;}
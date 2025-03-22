#include<stdio.h>
void TOH(int n,char L,char M,char R){

    if(n==0){
        return;
    }
    else{
        TOH(n-1,L,R,M);
        printf("%c to %c\n",L,R);
        TOH(n-1,M,L,R);
    }
}

int main(){
    int n=3; 
    // int n=4; 
    char L ='L';
    char M ='M';
    char R ='R';
    TOH(n,L,M,R);
    return 0;
}
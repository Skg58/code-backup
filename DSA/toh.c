#include<stdio.h>

void TOH(int a,char l ,char m , char r){
    if (a==0)
    {
       return;
    }
    TOH(a-1,l,r,m);
    printf("%c to %c\n",l,r);
    TOH(a-1,m,l,r);
    

}

int main(){
    char l='l',m='m',r='r';
    TOH(3,l,m,r);
    return 0;
}
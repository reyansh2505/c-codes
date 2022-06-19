#include<stdio.h>

void number(int);

int main(){
    int n=0;
    number(n);
return 0;
}

void number(int n){
    if(n<=50){
        printf(" %d ",n);
    }
    return number(n+1);
}   
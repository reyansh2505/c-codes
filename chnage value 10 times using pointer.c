#include<stdio.h>
void chanfe(int *a);
int main(){
int x=4;

printf("the value before chang=%d\n",x);
change(&x);
printf("the value after change=%d",x);
return 0 ;}
void change(int *a){

    (*a)=*a*10;

}

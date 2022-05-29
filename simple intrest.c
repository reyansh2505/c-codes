#include<stdio.h>
#include<conio.h>

int main(){
int p,r,t;
float si;
printf("enter the vales of p,r,t");
scanf("%d,%d,%d",&p,&r,&t);
si=p*r*t/100;
scanf("%f",&si);
printf("the value of si is: %f",si);
return 0;
}

#include<stdio.h>
#include<math.h>

int main(){
//ax^2+bx+c
int a,b,c;
printf("enter the values of a,b and c");
scanf("%d,%d,%d",&a,&b,&c);
float x= (-b+sqrt(b*b-4*a*c))/2*a;
float y= (-b-sqrt(b*b-4*a*c))/2*a;
printf("%f %f",x,y);
return 0;
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,large;
printf("enter two numbers");
scanf("%d%d",&a,&b);
large=a>b?a:b;
printf("largest number is:%d",large);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int x=4,y=5;
x=++x*++y;
y=y++*x++;
printf("x=%d and y=%d",x,y);
getch();
}

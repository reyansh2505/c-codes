#include<stdio.h>
#include<conio.h>
void main()
 int n,i,c,r;

for(n=2;n<r;n++)
{
c=0;
for(i=1;i<=n/2;i++)
{
    if(n%i==0)
c++;
}
if (c==0)
printf("%d\t",n);
}
getch();
}

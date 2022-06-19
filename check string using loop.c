#include<stdio.h>
int main()
{char str[15]="kapil";
int flag=0;
int i;
char x='l';
for(i=0;i<15;i++)
{if (str[i]==x){
flag=1;
break;}
}
if(flag==1)
{printf("character %c is  found at %d position",x,i+1 );}
else
printf("ch is not found");
return 0;
}

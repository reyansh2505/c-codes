#include<stdio.h>
#include<string.h>
int main()
{int i,n,c=0;
char ch[20];
printf("enter the string:");
gets(ch);
n=strlen(ch);
for(i=0;i<n/2;i++)
{if(ch[i]==ch[n-i-1])
c++;
}
if(c==i)
printf("string is palindrone");
else
printf("string is not palindrone");
return 0;
}

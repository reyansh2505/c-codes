#include<stdio.h>
void check(char st[], char r){ int i;
//int i;

int flag=0;
for(i=0;i<12;i++){
if(r==st[i])
{
    flag=1;

    break;}
}
if(flag==1)
{printf("%c is  found at %d position",r,i+1);
}
else
    printf("chacter is not found");
//return ;
}
 int main()
 {char st[11]="harrassament";
check(st ,'l');
 return 0;}

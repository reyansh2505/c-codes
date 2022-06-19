#include<stdio.h>
int occurance(char st[], char r){  char *ptr=st;
int count=0;
while(*ptr!='\0'){
if(*ptr==r)
{count++;
}
ptr++;}

 return count;}
 int main()
 {char st[]="harrassment";
 int count =occurance(st , 'r');
 printf("%d", count);
 return 0;}

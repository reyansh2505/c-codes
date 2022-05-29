#include<stdio.h>

int main(){
int marks;
printf("enter your marks");
scanf("%d",&marks);
switch(marks/10){
case 9:
printf("your grade is A");
break;
case 8:
printf("your grade is B");
break;
case 7:
printf("your grade is C");
break;
case 6:
printf("your grade is D");
break;
default:
printf("your grade is E");
break;
}
return 0;
}

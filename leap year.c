#include<stdio.h>

int main(){
int year;
printf("enter the year");
scanf("%d",&year);
if (year%4==0){
printf("this year is leap year");
}
else{
printf("this year is not a leap year");
}
return 0;
}

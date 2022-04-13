#include<stdio.h>
#include<conio.h>
void main()
{int days,cob;
cob=300;
float fine;
printf("enter number of days");
scanf("%d",&days);
{if (days<=30)
fine=0;
if (days>30 && days<=60)
fine=(days-30)*0.5;
if (days>60 && days<=90)
fine=(days-30)*0.6;
if (days>90)
fine=(days-30)*1;
if (fine>2*cob)
fine=2*cob;
}
printf("fine is:%f",fine);
}

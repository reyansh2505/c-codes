#include<stdio.h>
#include<conio.h>

int factorial(int num)
{int fact=1;
{for(int i=1;i<=num;i++)
fact=(fact)*i;
return 1;
}

}

int main()
{int num;
printf("enter a positive number");
scanf("%d",num);
factorial(num);
printf("%d",&num);
return 0;
}

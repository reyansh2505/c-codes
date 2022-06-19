#include<stdio.h>
int main()
{ FILE *fptr;
char name[10];
float salary;
fptr=fopen("mukesh.txt","w");
printf("enter the name");
scanf("%s",&name);
fprintf(fptr,"name-%s\n", name);

printf("enter the salary");
scanf("%f",&salary);

fprintf(fptr,"salary-%f", salary);
fclose(fptr);



return 0;
}

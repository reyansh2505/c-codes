#include<stdio.h>
#include<string.h>
 typedef struct employee{
int code;
float salary;
char name[10]; }emp;
int main()
{
    int i;
    emp e[10];
for(int i=0;i<=10;i++){
        printf("employee %d-\n",i+1);
          printf("name ");
    scanf("%s", &e[i].name);
    printf(" code is ");
    scanf("%d", &e[i].code);
   printf(" salary ");
    scanf("%f", &e[i].salary);


}

return 0;

}

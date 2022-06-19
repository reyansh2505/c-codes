#include<stdio.h>
void encrypt(char *ptr){
while(*ptr!='\0')
    {*ptr=*ptr+2;
    ptr++;

    }
}
int main()
{
    char st[]="go to room";
    encrypt(st);
    printf("%s",st);
    return 0;
}

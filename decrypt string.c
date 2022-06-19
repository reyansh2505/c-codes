#include<stdio.h>
void decrypt(char *ptr){
while(*ptr!='\0')
    {*ptr=*ptr-1;
    ptr++;

    }
}
int main()
{
    char st[]="hp!up!sppn";
    decrypt(st);
    printf("%s",st);
    return 0;
}

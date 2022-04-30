#include<stdio.h>
int main()
{
int arr [100],pos,c,n;
printf("enter");
scanf("%d",&n);
printf("%d",n);
for(c=0;c<n;c++)
scanf("%d",&pos);
if(pos>=n+1)
printf("");
else {
       for(c=pos-1;c<n-1;c++)
       arr[c]=arr[c+1];
printf("resulted");
for(c=0;c<n-1;c++)
    printf("%d",arr[c]);
}
return 0;
}

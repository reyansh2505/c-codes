#include<stdio.h>
#include<string.h>
struct vector{
int x;
int y
};
struct vector sumvector(struct vector v1,struct vector v2){
struct vector result;
result.x=v1.x+v2.x;
result.y=v1.y+v2.y;
return result;
};
int main()
{struct vector v1,v2,sum;
v1.x=4;
v1.y=5;
printf("the x dim is%d ,the y dim is %d\n",v1.x, v1.y);
v2.x=7;
v2.y=8;
printf("the x dim is%d,the y dim is %d\n",v2.x, v2.y);
sum=sumvector(v1,v2);
printf("the x dim of result is %d,the y dimof result  is %d",sum.x, sum.y);
return 0;
}

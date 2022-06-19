#include<stdio.h>
void print(int a,int b,int *sum, float *avg);
int main(){
int x=5,y=5;
int sum;
float avg;
print(x,y,&sum,&avg);
printf("sum=%d,avg=%f",sum,avg);
return 0 ;}
void print(int a,int b,int *sum,float *avg){
*sum=a+b;
*avg= (float)(*sum)/2;
}

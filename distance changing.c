#include<stdio.h>
#include<math.h>

int main(){
    float d;// in kilometer
    int m;// in meter
    int c;// in centimeter
    printf("enter the value of d");
    scanf("%f",&d);
    m=d*1000;
    c=d*100000;
    printf("distance in meter is %d\n",m);
    printf("distance in centimeter is %d",c);
return 0;
}

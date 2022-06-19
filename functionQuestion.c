#include<stdio.h>   // function to find the area of square, circle and rectangle

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main(){
    float a = 5;
    float b = 10;
    
    printf("area is : %f", rectangleArea(a,b));

    return 0;
}

float squareArea(float side){
    return side * side;
}

float circleArea(float rad){
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b){
    return a * b;
}
#include<stdio.h> // ERROR OCCURING
int main(){
    int number;
    printf("enter your number");
    scanf("%d", &number);

   if (number>=0) {
       printf("positive\t");
       if (number%2==0 )
       {
           printf("even\n");
       }
       else {
           printf("odd");
       }
       
       
   }
   else{
       printf("negative\n");
   }
   return 0;
}
   
#include <stdio.h> // print numbers from 0 to n, if n is given by user

int main (){
    int n;
    printf("enter number:");
    scanf("%d", &n);
     
    int i=0;
    while(i<=n){
        printf("%d\n", i);
        i++;
    }
     // and this can be done with for loop also  
    //   for(int i=0; i<=n; i++) {
    //      printf ("%d\n", i);
    //   }
      
    return 0;
}
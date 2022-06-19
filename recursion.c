// #include <stdio.h>

// int fact (int n);

// int main (){
//     printf("factorial is : %d", fact (5));
//     return 0;
// }

// int fact(int n){
//     if (n==0){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1 * n;
//     return factN;
// }




// write a function to print nth term of the fibonacci
// #include <stdio.h>
// int fib(int n);

// int main (){
//     printf("%d", fib(6));

//     return 0;
// }
// int fib(int n){
//     if (n==0){
//         return 0;
//     }
//     if (n==1){
//         return 1;
//     }
//     int fibN = fib(n-1)+fib(n-2);
//     //printf("fib of %d is : %d\n", n,fibN);
//     return fibN;
// }




// #include <stdio.h>

// int main(){
//     int n, a=0, b=1,c;
//     printf("enter the number:");
//     scanf("%d", &n);

//     for (int i=1; i<=n; i++){
//         printf("%d\t", a);
//         c=a+b;
//         a=b;
//         b=c;
//     }

//     return 0;
// }
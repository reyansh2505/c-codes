// sum of first n natural numbers
// #include <stdio.h>

// int main (){
//     int n, sum=0;
//     printf("enter the value of n:");
//     scanf("%d",&n);

//     for(int i=1; i<=n; i++){
//         sum+=i;
//        // sum=(n*n+n)/2;   this can also be used. and in this case for loop is not required
//     }
//     printf("sum of first %d natural numbers is : %d\n", n, sum);

//     return 0;
// }




// largest element of array
// #include <stdio.h>
// int returnMax(int array[], int n){
//     int max=0;
//     for (int i=0; i<n; i++){
//         if (array[i]>max){
//             max = array[i];
//         }
//     }
//     return max;
// }

// int main(){
//     int arr[]= {1,2,3,4,5};
//     int max = returnMax(arr,7);
//     printf("the maximum element in this array is %d",max);
    
//     return 0;
// }




// to find prime number or not
// #include <stdio.h>

// int main(){
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     int isPrime=1;

//     for (int i=2; i*i<n; i++){
//         if(n%i==0){
//             isPrime =0;
//         }
//     }
//     if (isPrime==1){
//         printf("the number %d is prime\n",n);
//     } else{
//         printf("the number %d is not prime\n",n);
//     }

//     return 0;
// }




// write a program to reverse a number
// #include <stdio.h>
// int reverse(int num){
//     int rev=0, rem;
//     while (num!=0){
//         rem = num%10;
//         rev = rev*10 + rem;
//         num = num/10;
//     }
//     return rev;
// }

// int main(){
//     int num = 12345;
//     int rev = reverse(num);
//     printf("the reversed number is %d", rev);

//     return 0;
// }




// factorial of a number
#include <stdio.h>
int factorialIterative (int n){
    int val = 1;
    for (int i=n; i>1; i--){
        val*=i;
    }
    return val;
}
int main(){
    int n;
    printf("enter the value of number:");
    scanf("%d", &n);
    int factorial = factorialIterative(n);
    printf("the value of factorial is %d\n", factorial);

    return 0;
}
/* create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third 
element where ptr is a pointer pointing to the first element of the array.*/

// #include <stdio.h>

// int main (){
//     int arr [10];
//     int *ptr = &arr[0];
//     ptr = ptr +2;

//     if (ptr == &arr[2]){
//         printf("these point to the same memory\n");
//     }
//     else {
//         printf("these do not point to the same location in memory\n");
//     }
//    return 0;
// }




/* write a program to create an aray of 10 integers and store multiplication table of 5 in it. */

// #include <stdio.h>

// int main (){
//     int mul [10];
//     for (int i=0; i<10; i++){
//         mul[i]= 5*(i+1);
//     }
//     for (int i=0; i<10; i++){
//         printf("5* %d = %d\n", i+1, mul[i]);
//     }
//     return 0;
// }




/* write a program containing a function which reverses the array passed to it*/

// #include <stdio.h>
// void reverse (int arr[], int n);
// void printArr(int arr[], int n);

// int main(){
//     int arr[]= {1,2,3,4,5,6,7};
//     reverse(arr,7);
//     printArr(arr, 7);

//     return 0;
// }
// void reverse (int arr[], int n){
//     for (int i=0; i<n/2; i++){
//         int firstValue = arr[i];
//         int secondValue = arr[n-i-1];
//         arr[i]= secondValue;
//         arr[n-i-1]= firstValue;
  
//     }
    
// }
// void printArr (int arr[], int n){
//     for(int i=0; i<n; i++){
//         printf("%d\n", arr[i]);
//     }
// }



/* create an array of size 3*10 containing multiplication tables of the numbers 2, 7 and 9 respectively */


// #include<stdio.h>
// void printTable (int *mulTable, int num, int n){
//     printf("The multiplication table of %d is :\n", num);
//     for (int i=0; i<n; i++){
//         mulTable[i]= num *(i+1);
//     }
//     for (int i=0; i<n; i++){
//         printf("%d*%d=%d\n", num, i+1, mulTable[i]);
//     }
// }


// int main (){
//     int mulTable [3][10];
//     printTable(mulTable[0], 2,10);
//     printTable(mulTable[1], 7,10);
//     printTable(mulTable[2], 9,10);


//     return 0;
// }




//write a function to count the number of odd numberes in array
// #include <stdio.h>
// int countOdd(int arr[], int n);
// int main (){
//     int arr[] = {1,2,3,4,5,6,7};
//     printf("%d", countOdd(arr, 7));

//      return 0;
// }
// int countOdd(int arr[], int n){
//     int count=0;
//     for (int i=0; i<n; i++){
//         if(arr[i] % 2 !=0){
//             count++;
//         }
//     }
//     return count;
// }



// write a program to store the first n fibonacci numbers
// #include <stdio.h>

// int main(){
//     int n;
//     printf("enter n:");
//     scanf("%d",&n);

//     int fib[n];
//     fib[0]=0;
//     fib[1]=1;

//     for (int i=2; i<n; i++){
//         fib[i]= fib[i-1]+fib[i-2];
//         printf("%d\t", fib[i]);
//     }
     
//     return 0;
// }
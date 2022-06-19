#include<stdio.h>

void printarray(int *A, int n){
    for(int i=0;i<n;i++){
        printf("%d\n",A[i]);
    }
    printf("\n");
}

void selection(int *A,int n){
    int min,temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
              temp=A[j];
              A[j]=A[j+1];
              A[j+1]=temp;
            }
        }
    }    
}
int main(){
    int A[]={2,7,4,0,12,9};
    int n=5;
    printarray(A,n);
    selection(A,n);
    printarray(A,n);
return 0;
}
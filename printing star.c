#include<stdio.h>

int star(int);

int main(){
    int n=4;
    star(n);
    return 0;
}

int star(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<2*i+1;j++){
        printf("*");
    }
    printf("\n");
}

}

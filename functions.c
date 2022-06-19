#include <stdio.h>
//declaration / prototype
void printHello();

int main (){
    printHello();  //function call
    printHello();
    printHello();

    return 0;
}
//function definition
void printHello (){
    printf("Helllo!\n");
}


//write a function that prints NAMASTE if user is Indian & BONJOUR if the user is French.

#include <stdio.h>

void namaste();
void bonjour();

int main(){
    printf("enter 'f' for French and 'i' for Indian: ");
    char ch;
    scanf("%c", &ch);

    if(ch=='i'){
        namaste();
    } else {
        bonjour();
    }

    return 0;
}

void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}



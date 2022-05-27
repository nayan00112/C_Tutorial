// Call by Referance

#include <stdio.h>
void Changex(int);
void main(){
    int x;
    printf("You learn more about in pointer topic.\n");
    x = 6;
    printf("The value of x is %d\n", x);
    Changex(&x);
    printf("After calling Changex function is %d\n", x);

    
}

void Changex(int x){
    *x = 1; 
}
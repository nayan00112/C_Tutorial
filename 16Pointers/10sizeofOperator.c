#include<stdio.h>
void main(){
    char c = 'r';
    double d = 46.6 + 54.14;
    
    char *pc = &c;

    printf("The Size of Char Variavle c is %d.\n", sizeof(c));
    printf("The Size of int c is %d.\n", sizeof(int));
    printf("The Size of float c is %d.\n", sizeof(float));
    printf("The Size of double c is %d.\n", sizeof(d)); // double variable
    printf("The Size of pointer variavle pc is %d.\n", sizeof(pc)); // pointer variable

}

// Output:
// The Size of Char Variavle c is 1.
// The Size of int c is 4.
// The Size of float c is 4.
// The Size of double c is 8.
// The Size of pointer variavle pc is 8.
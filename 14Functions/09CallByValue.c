// call by value reference

#include <stdio.h>
int Chengex(int);
void main(){
    int x;
    x = 4;
    printf("1. Tha value of x is %d\n", x);
    Chengex(x);
    printf("2. Tha value of x is %d\n", x); // value of c not change as call by value reference.
}

int Chengex(int x){
    x = x + 1;
    printf("Tha value of x in Chengex function is %d\n", x);
    return x;
}
// Output:
// 1. Tha value of x is 4
// Tha value of x in Chengex function is 5
// 2. Tha value of x is 4
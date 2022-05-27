// Any function which calls itself is called recursive function and such function calls are called recursive calls.
#include<stdio.h>
int fact(int);
void main(){
    int x = 5;
    int y;
    y = fact(x);

    printf("\nThe factoriyal of number %d is %d.", x, y);
}

int fact(int x){
    if (x == 0){
        return 0;
    }
    else if(x == 1){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}

// Output:
// The factoriyal of number 5 is 120.

// Reference https://www.javatpoint.com/recursion-in-c
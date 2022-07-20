// #define

/*
The #define preprocessor directive is used to define constant or micro substitution.
It can use any basic data type.

Syntax:
    #define token value
*/


// Let's see an example of #define to define a constant:

#include<stdio.h>

#define PI 3.14 
int main(){
    printf("%f", PI); // 3.14
    return 0;
}

// Let's see an example of #define to create a macro.
// See NextCode.
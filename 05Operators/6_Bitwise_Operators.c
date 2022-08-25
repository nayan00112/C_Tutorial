/*
Bitwise Operator in C

The bitwise operator are the operator used to perform the operations on the data at the bit-level.
When we perform the bitwise operations, then it is also known as bit-level programming.
It is consists of two  digits, either 0 or 1.
It is mainly used in numerical computations to make the calculations faster.

Operator and its meaning.
    &   -  Bitwise AND Operator
    |   -  Bitwise OR Operator
    ^   -  Bitwise exclusive OR Operator
    ~   -  One's complement Operator
    <<  -   Left Shift Operator
    >>  -   Right Shift Operator

*/

#include<stdio.h>
void main(){
    int a = 4, b = 12;
    printf("a&b is %d \n", a&b);
    printf("a|b is %d \n", a|b);
    printf("a^b is %d \n", a^b);
    //printf("a~b is %d \n", a~b);
    printf("~4 is %d \n", ~4);
    printf("a<<b is %d \n", a<<b);
    printf("a>>b is %d \n", a>>b);

    /*
    Output: 
        a&b is 4
        a|b is 12
        a^b is 8
        ~4 is -5
        a<<b is 16384
        a>>b is 0
    */

}

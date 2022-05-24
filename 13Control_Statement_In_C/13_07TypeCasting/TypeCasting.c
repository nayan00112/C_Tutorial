/*
Type Casting in C:
    Type Casting allows us to convert one data type int0 other.
    In C language, we use cast operator for typecasting which is denoted by (type).

    Syntax:
        (type)value;

    Note: It is always recommended to convert the lower value to higher for avoiding data loss.
*/

#include<stdio.h>
void main(){
    float a = 9/2;
    printf("without type casting: %f\n", a);
    a = (float)9/2;
    printf("with type casting: %f\n", a);
// Output:
// without type casting: 4.000000
// with type casting: 4.500000
}
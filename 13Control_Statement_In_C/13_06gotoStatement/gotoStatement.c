#include<stdio.h>
void main(){
    /*
    The goto statement is known as jume stement in C. As the name suggests, goto is ued to transfer the program control to a predefined lable.
    The gotp statement can be used to repeat some part of the code for a particulat condition.
    It can also be used to break the multiple loops which can't be done by using a singele break statement.
    However, using goto is avoided thest days since it makes the program less readable and complected.

    Syntax:
        lable:
        // Some Code
        goto lable;

    */

    int j = 4;
    int i = 1;

    lableCount:
    printf("%d *  %d = %d\n", j, i, j * i);
    i++;
    if (i <= 10)
    goto lableCount;
    // Output:
    // 4 *  1 = 4
    // 4 *  2 = 8
    // 4 *  3 = 12
    // 4 *  4 = 16
    // 4 *  5 = 20
    // 4 *  6 = 24
    // 4 *  7 = 28
    // 4 *  8 = 32
    // 4 *  9 = 36
    // 4 *  10 = 40
}
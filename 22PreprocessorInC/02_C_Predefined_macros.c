/*
C Predefined macros
    ANSI C define many predefined macros that can be used in c program.

    1. __DATE__
        > represents current date in "MMM DD YYYY" formate.
    
    2. __TIME__
        > represents current time in "HH:MM:SS" format.

    3. __FILE__
        > represent current file name.

    4. __LINE__
        > represent current line number.

    5. __STDC__
        > It is defined as 1 when compiler compiles with the ANSI standard.
*/

#include<stdio.h>

int main(){
    printf("Today Date is : %s\n", __DATE__);
    printf("Now, Time is : %s\n", __TIME__);
    printf("Today Date is : %s\n", __FILE__);
    printf("Line is : %d\n", __LINE__);
    printf("STDC : %d\n", __STDC__);

    /*
    Output:
    Today Date is : Jul 20 2022
    Now, Time is : 17:55:47
    Today Date is : E:\CStudy\22PreprocessorInC\02_C_Predefined_macros.c
    Line is : 28
    STDC : 1
    */

    return 0;
}
#include <stdio.h>

void funOne();

void main()
{
    funOne();
    funOne();
    funOne();
    funOne();
}

void funOne()
{
    int x = 10; // local variable
    static int callFunctionNumber = 1;
    printf("the value of x is %d \n", x);
    printf("This function calld %d times.\n", callFunctionNumber);

    x = x + 1;
    callFunctionNumber = callFunctionNumber + 1;
}

// Output:
/*the value of x is 10 
This function calld 1 times.
the value of x is 10 
This function calld 2 times.
the value of x is 10 
This function calld 3 times.
the value of x is 10 
This function calld 4 times.
*/


/*
    A variable that is declared with the static keyword is called static variable.
    It retains its value between muitiple function calls.

    If you call this function many times, the  local varriable will print the same value for each function call, e.g, 11,11,11 and so on.
    But the static variable will print the incremented value in each function call, e.g. 11, 12, 13 and so on.
 */
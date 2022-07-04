#include <stdio.h>
#include <math.h>
void main()
{
    /*
    cell(number)

    round up the given number.
    If returns the integer value which is greater than or equal to given number.
    */
    printf("\n%f", ceil(3.6)); // 4.000000
    printf("\n%f", ceil(2.2)); // 3.000000

    //--------------------------------------------------------------------------------

    /*
    floor(number)

    round down the giver number.
    It returns the  integer value which is less than or equal to given number.
    */
    printf("\n%f", floor(3.6)); // 3.000000
    printf("\n%f", floor(2.2)); // 2.000000

    //--------------------------------------------------------------------------------

    /*
    squt(number)

    returns the square root og given number.
    */
    printf("\n%f", sqrt(5));    // 2.236068
    printf("\n%f", sqrt(1.44)); // 1.200000

    //--------------------------------------------------------------------------------

    /*
    pow(base, exponent)

    returns the power of given number
    */
    printf("\n%f", pow(2, 3));   // 8.000000
    printf("\n%f", pow(1.5, 2)); // 2.250000

    //--------------------------------------------------------------------------------

    /*
    abs(number)

    returns the absolute value of given number
    */
    printf("\n%d", abs(-34)); // 34
    printf("\n%d", abs(2));   // 2
    printf("\n%d", abs(-2));  // 2
}
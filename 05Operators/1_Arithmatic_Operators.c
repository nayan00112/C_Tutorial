#include <stdio.h>
void main()
{
    float numOne, numTwo, result;

    printf("Enter the value of numOne: ");
    scanf("%f", &numOne);

    printf("Enter the value of numTwo: ");
    scanf("%f", &numTwo);

    // Arithmatic Operatior +, -, *, /, %
    /*
        + Addition or unary plus
        - Subtraction or unary minus
        * Muiltiplication
        / Division
        % Modulo division
    */

    // + Operatior
    result = numOne + numTwo;
    printf("The addition of %f + %f is equal to %f\n", numOne, numTwo, result);

    // - Operatior
    result = numOne - numTwo;
    printf("The subtraction of %f - %f is equal to %f\n", numOne, numTwo, result);

    // + Operatior
    result = numOne * numTwo;
    printf("The muiltiplication of %f * %f is equal to %f\n", numOne, numTwo, result);

    // / Operatior
    result = numOne / numTwo;
    printf("The division of %f / %f is equal to %f\n", numOne, numTwo, result);

    // % Operatior
    // !!!
    // We can not applay % operator in float, double variable. 
    // reminder operator (%) can applicable for int.
    // fmode function for find reminder for float variable.

    result = fmod(numOne, numTwo);
    printf("The reminder of %f %% %f is equal to %f\n", numOne, numTwo, result);
    // we add %% to print % in console.

    printf("\n%d %% %d = %d", 3,2, 3%2);
}

// Output:
/*
    Enter the value of numOne: 7
    Enter the value of numTwo: 3
    The addition of 7.000000 + 3.000000 is equal to 10.000000
    The substraction of 7.000000 - 3.000000 is equal to 4.000000
    The muiltiplication of 7.000000 * 3.000000 is equal to 21.000000
    The division of 7.000000 / 3.000000 is equal to 2.333333
    The reminder of 7.000000 % 3.000000 is equal to 1.000000
    3 % 2 = 1
*/
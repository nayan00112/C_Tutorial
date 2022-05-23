#include <stdio.h>

int number = 36; // Globle Variable.

void num();

void main()
{
    // 2.Globle Variable........
    /*
        A variable that is declared outside the function or block is called a globle variable.
        Any  function can change the value of the Globle Variable.
        It is available to all the functions.
    */
    num();
    printf("\nthe num old data is: %d", number);
    number = 1;
    printf("\nthe num new data is: %d", number);
    num();

    // output:
    //  the num funcrion data is: 36
    //  the num old data is: 36
    //  the num new data is: 1
    //  the num funcrion data is: 1
}

void num()
{
    printf("\nthe num funcrion data is: %d", number);
}
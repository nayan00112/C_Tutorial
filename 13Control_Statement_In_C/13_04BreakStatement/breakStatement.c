// Break Statement in C:

/*
The break is a keyword in C which is used to bring the programm control out of the loop.
The break statement is used inside loops or switch statement is used inside loops or switch statement.
The break statement break statement breaks the loop one by one, i.e. in the case of nested loops, it breaks the inner loop first and then proceeds to outer loops.
The break statement in C can be used in the following two scenarios:
    1. With swich case
    2. With loop

*/

#include <stdio.h>
void main()
{
    // With loop:
    int i;
    for (i = 0; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        else
        {
            printf("%d\n", i);
        }
    }
    // Output:
    // 0
    // 1
    // 2
    printf("Outside the loop, value of i id: %d", i);
    // Outside the loop, value of i id: 3

    //----------------------------------------------------------------------

    // With swich case:
    int j = 2;
    switch (j)
    {
    case 1:
        printf("\nOne");
        break;
    case 2:
        printf("\nTwo");
        break;
    case 3:
        printf("\nThree");
        break;
    case 4:
        printf("\nFour");
        break;
    case 5:
        printf("\nFive");
        break;
    default:
        printf("\ndefault");
        break;
    }
    // Output: Two
}
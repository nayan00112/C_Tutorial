/*
Continue Statement in C:
    The continue statement in C lanuage is used to bring the program control to the beginning of the loop.
    The continue statement skips some lines of code inside the loop and continues with the next iteration.
    It is mainly used for a condition so thet we can skip some code for a particular condition.
*/
#include <stdio.h>
void main()
{
    int num = 5;
    int i;
    for (i = -5; i <= 5; i++)
    {
        if (i != 0)
        printf("\n The %d / %i = %d (int value)", num, i, num / i);
        else //  num / i -> 5 / 0 -> error so it is continue.
        {
            continue;
        }
    }
}
    // Output:
    // The 5 / -5 = -1 (int value)
    // The 5 / -4 = -1 (int value)
    // The 5 / -3 = -1 (int value)
    // The 5 / -2 = -2 (int value)
    // The 5 / -1 = -5 (int value)
    // The 5 / 1 = 5 (int value)
    // The 5 / 2 = 2 (int value)
    // The 5 / 3 = 1 (int value)
    // The 5 / 4 = 1 (int value)
    // The 5 / 5 = 1 (int value)
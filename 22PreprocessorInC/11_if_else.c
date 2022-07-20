#include <stdio.h>
#define age 19
int main()
{
#if (age > 18) // ("age" is by define. not a datatype varuable like int or float.)
    printf("You are now able to election.\n");
    printf("You can applay form for ATM Debit card.\n");
    printf("You can drive car with your licence.");
#else
    printf("You can not able to election.\n");
    printf("You can not applay form for ATM Debit card.\n");
    printf("You can not drive car with your licence.");
#endif

    return 0;
}

// Output:
/*
You are now able to election.
You can applay form for ATM Debit card.
You can drive car with your licence.
*/

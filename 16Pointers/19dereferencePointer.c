// https://www.javatpoint.com/c-dereference-pointer

#include <stdio.h>
void main()
{
    int a = 4;
    int *ptr;
    ptr = &a;

    printf("Value of a is : %d.\n", *ptr);

    *ptr = 5;

    printf("Value of changed variable a is : %d.\n", *ptr);
}

// Output:
// Value of a is : 4.
// Value of changed variable a is : 5.
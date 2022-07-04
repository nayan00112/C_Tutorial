/*
Using typedef with pointers:
    We can also provided another name odr alias name to the pointer variables with the help of the typdef.
    For example, we normally declare a pointer, as shown below:

*/

#include <stdio.h>

int main()
{
    typedef int *ptr;
    int a = 3;
    int b = 6;
    ptr i = &a, j = &b;

    printf("%d, %d", i, j); // -1071647156, -1071647160

    return 0;
}
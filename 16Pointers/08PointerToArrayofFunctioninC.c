// https://www.javatpoint.com/pointer-arithmetic-in-c

#include <stdio.h>
int add(int, int);
int main()
{
    int (*p)(); // for function. err if "int *p()"; true is "int (*p)()"
    p = &add;
    printf("addition of 3 and 5 is %d.\n", add(3, 5));
    printf("The address of function add() is %u.\n", p);
}

int add(int x, int y)
{
    return (x + y);
}

// Output:
// addition of 3 and 5 is 8.
// The address of function add() is 3989181914.

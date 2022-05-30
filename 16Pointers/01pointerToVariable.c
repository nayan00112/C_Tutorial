#include <stdio.h>
void main()
{
    int a = 4;
    int *p; // poiner variable

    p = &a;

    printf("The value of a is %d.\n", a);
    printf("The value address of pointer p is %x.\n", p);
    printf("The value of pointer p is %d.\n", *p);
    printf("The value of p is %d.\n", p);
    // Output:
    // The value of a is 4.
    // The value address of pointer p is 2f3ff904.
    // The value of pointer p is 4.
    // The value of p is 792721668.
}
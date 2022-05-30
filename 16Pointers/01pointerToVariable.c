#include <stdio.h>
void main()
{
    int a = 4;
    int *p; // poiner variable

    p = &a;

    printf("The value of a is %d.\n", a);
    printf("The value address of pointer p is %x.\n", p); // %x -> unsigned hexadecimal
    printf("The value address of pointer p is %p.\n", p); // %x -> unsigned hexadecimal
    printf("The value of pointer p is %d.\n", *p);
    printf("The value of p is %d.\n", p);
    // Output:
    // The value of a is 4.
    // The value address of pointer p is 233ff844.
    // The value address of pointer p is 00000019233ff844.
    // The value of pointer p is 4.
    // The value of p is 591394884.
}
#include <stdio.h>
void main()
{
    int a = 4;
    int *p; // poiner variable

    p = &a;

    printf("The value of a is %d.\n", a);
    printf("The value address of pointer p is %x.\n", p); // %x -> unsigned hexadecimal
    printf("The value address of pointer p is %p.\n", p); 
    printf("The value of pointer p is %d.\n", *p);
    printf("The value of p is %d.\n", p);
    // Output:
    // The value of a is 4.
    // The value address of pointer p is 233ff844.
    // The value address of pointer p is 00000019233ff844.
    // The value of pointer p is 4.
    // The value of p is 591394884.

    /*
    Note that the * sign can be confusing here, as it does two different things in our code:

    When used in declaration (int* ptr), it creates a pointer variable.
    When not used in declaration, it act as a dereference operator.
    Why Should I Learn About Pointers? Pointers are important in C, because they give you the ability to manipulate the data in the computer's memory - this can reduce the code and improve the performance.

    Good To Know: There are three ways to declare pointer variables, but the first way is mostly used:

        int* myNum; // Most used
        int *myNum;
        int * myNum;
    */
}
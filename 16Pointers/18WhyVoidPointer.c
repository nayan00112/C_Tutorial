/*
Why we use void poiner:
    We use void poiters because of its reusability.
    Void pointers can store the object of any type and we can retrieve the object of any type by using the indirection operatio with typecasting.

*/

#include <stdio.h>
void main()
{

    int a = 5;
    char b = 'x';
    float c = 3.14;

    void *ptr;

    ptr = &a;
    printf("The address of a is %u.\n", ptr);
    // printf("The value of a is %d.\n", *ptr); // Error, need typecasting.
    printf("The value of a is %d.\n", *((int *)ptr)); // Correct

    ptr = &b;
    printf("The address of b is %u.\n", ptr);
    printf("The value of b is %c.\n", *((char *)ptr));

    ptr = &c;
    printf("The address of c is %u.\n", ptr);
    printf("The value of c is %f.\n", *((float *)ptr));
}

// Output:
// The address of a is 3687153000.
// The value of a is 5.
// The address of b is 3687152999.
// The value of b is x.
// The address of c is 3687153004.
// The value of c is 3.140000.

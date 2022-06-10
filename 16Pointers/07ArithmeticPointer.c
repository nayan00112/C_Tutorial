#include <stdio.h>
void main()
{

    /*
    Following operations are possible on the pointer in C language.
        > Increment
        > Decrement
        > Addition
        > Subtarction
        > Comparision
    */
    int a;
    int *p = &a;
    printf("The value of pointer p is : %u\n", p);
    p = p - 1;
    printf("Now, the value of pointer p is : %u\n", p);
    p = p + 1;
    printf("Now, the value of pointer p is : %u\n", p);
    p++;
    printf("Now, the value of pointer p is : %u\n", p);
    p--;
    printf("Now, the value of pointer p is : %u\n", p);
    --p;
    printf("Now, the value of pointer p is : %u\n", p);
    ++p;
    printf("Now, the value of pointer p is : %u\n", p);

    // Output:
    // The value of pointer p is : 3735026260
    // Now, the value of pointer p is : 3735026256
    // Now, the value of pointer p is : 3735026260
    // Now, the value of pointer p is : 3735026264
    // Now, the value of pointer p is : 3735026260
    // Now, the value of pointer p is : 3735026256
    // Now, the value of pointer p is : 3735026260
}

/*
ILLEGAL arithmatic with pointer. Where "add" is pointer variable.
    > add + add = illegal
    > add * add = illegal
    > add % add = illegal
    > add / add = illegal
    > add & add = illegal
    > add ^ add = illegal
    > add | add = illegal
    > ~add = illegal
*/
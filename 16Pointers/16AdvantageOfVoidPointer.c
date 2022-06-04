// {{Revesion needed ...}} 
// https://www.javatpoint.com/void-pointer-in-c

/*
The malloc() and calloc() function return the void pointer, so these function can be used to allocate the memory of any data type.
*/

#include <stdio.h>
#include <malloc.h>

int main()
{
    int a = 43;
    int *x = (int *)malloc(sizeof(int));
    x = &a;
    printf(" value of x %d.\n", *x); // value of x 43.
    return 0;
}


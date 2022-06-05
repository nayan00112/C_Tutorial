// NULL Pointer.

// https://www.javatpoint.com/null-pointer-in-c

#include <stdio.h>
void main()
{
    float *ptr = NULL;
    printf("address %u\n", ptr);
    if (ptr == NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        printf("Memory is allocated\n");
    }
}

// Output:
// address 0
// Memory is not allocated
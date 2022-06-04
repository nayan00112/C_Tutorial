#include <stdio.h>
int fun();
int main()
{
    int (*pointerFun)();
    pointerFun = &fun; // Pointer "pointerFun" is pointing to the address of a function "fun".
    fun();
    printf("The address of function name \"fun\" ia %u.\n", pointerFun);
    return 0;
}

int fun()
{
    printf("Hii This is function.\n");
    return 0;
}

// Output:
// Hii This is function.
// The address of function name "fun" ia 3208713663.
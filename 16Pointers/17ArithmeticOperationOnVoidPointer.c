/*
    We cannot applay the arithmatic operations on void pointers in C directly.
    We need to applay the proper typecasting so that we perform the arithmatic operations on the void pointers.

*/

#include <stdio.h>
int main()
{

    float a[3] = {34.45, 66.28, 86.38};
    void *ptr;

    ptr = &a;

    //INCORRECT
    // for(int i = 0; i<=2; i++){
    //     printf("%f\n", *ptr);
    //     ptr = ptr + 1; // INCORRECT
    // }

    /*
    The above code shows the compile time error that "Invalid use of void expression" as we cannot applay the arithmatic operations on void pointer directly, i.e. ptr = ptr + 1; {{Depend on compiler...}}
    */

    // CORRECT.
    for (int j = 0; j <= 2; j++)
    {
        printf("%f\n", *((float *)ptr + j)); // CORRECT.
    }

    return 0;
}

// Output:
// 34.450001
// 66.279999
// 86.379997
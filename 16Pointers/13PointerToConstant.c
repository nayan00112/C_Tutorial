// Pointer to Constant: {Pointer to Constant >> Cannot change the value}

//     A pointer to constant is a pointer through which the value of the variable that the pointer points cannot be changed.
//     The address of these pointers can be changed, but the value of the  variable that the pointer points cannot be changed.

//         Syntax of Pointer to Constant:
//             const <type of pointer>* <name of pointer>
//             eg. const int* ptr;


#include<stdio.h>
void main(){
    int a = 4;
    int b = 6;

    int *ptr = &a;
    const int *p = &a;

    printf("The value of pointer ptr is %u.\n", ptr);
    printf("The value of const pointer p is %u.\n", p);

    *ptr = 66;
    //*p = 23; // error: assignment of read-only location ‘*p’

    printf("The value of pointer ptr is %u.\n", ptr);
    printf("The value of const pointer p is %u.\n", p);

}

// Output:
// The value of pointer ptr is 2319032912.
// The value of const pointer p is 2319032912.
// The value of pointer ptr is 2319032912.
// The value of const pointer p is 2319032912.

// Constant Pointer to a Constant: {neither address nor value change}
//     A consant pointer to a constant is a pointer which is a combination of the above two pointer, which is a combination of the above two pointers.
//     It can neither change the address of the variable to which it is pointing nor it can change the value placed at this address.
//         Syntax:
//             const <type of pointer> * const <type of pointer>
//             eg. const int* const ptr;

#include <stdio.h>
void main(){
    int a = 6;
    // int b = 7;
    const int* const ptr = &a;
    printf("Tha address of a is %u.\n", ptr); //Tha address of a is 3768581204.

    // *ptr = 4; {Cannot change value}  //error: assignment of read-only location ‘*ptr’
    // ptr = &b; {Cannot change address}  //error: assignment of read-only variable ‘ptr’
    //printf("Tha address of a is %u.\n", ptr);

}

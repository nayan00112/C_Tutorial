// const pointer in C: {Constant Pointer >> Not Change Address}

//     A constant pointer in C cannot change the address of the variable to which it is pointing, 
//     i.e. the address will remaain constant.
//     Therefore, we can say that if a constant pointer is pointing to some variable, then it cannot point to any other variable.

//         Syntax of Constant Pointer:
//             <type of pointer> *const <name of pointer>
//             eg. int *const ptr

#include <stdio.h>
void main()
{
    char ch = 'n';
    char ch2 = 'x';

    char *vp = &ch;
    char *const p = &ch; // const

    printf("---------------------------------------\n");
    printf("%c\n", ch);  // n
    printf("%c\n", *vp); // n
    printf("%u\n", vp); // 3504338991
    printf("%c\n", *p); // n
    printf("%u\n", p);  // 3504338991 (const pointer)
    printf("---------------------------------------\n");

    vp = &ch2; // possible.
    //p = &ch2; // error: assignment of read-only variable ‘p’

    printf("%c\n", ch);  // n
    printf("%c\n", *vp); // x
    printf("%u\n", vp); //3504338990
    printf("%c\n", *p); // n
    printf("%u\n", p);  // 3504338991 (const pointer)
    printf("---------------------------------------\n");
}
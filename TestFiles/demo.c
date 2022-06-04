#include <stdio.h>
void main()
{

    int c = 2;
    int *ptr_C;
    ptr_C = &c;
    printf("---------------\n");
    printf("%p\n", ptr_C);  // Reference: Output the memory address of c with the pointer.
    printf("%d\n", *ptr_C); // Dereference: Output the value of c with the pointer
    printf("%d\n", ptr_C);
    printf("%x\n", ptr_C);
    // Output:
    // 0000007ce37ff884
    // 2
    // -478152572 {{ int version of "0000007ce37ff884" may be.}}
    printf("---------------\n");

    printf("%p\n", &c); // Reference: Output the memory address of c with the pointer.
    printf("%d\n", &c); // Dereference: Output the value of c with the pointer
    printf("%d\n", &c);
    printf("%x\n", &c);
}
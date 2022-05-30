// 1. https://www.w3schools.com/c/c_pointers.php
// 2. https://www.javatpoint.com/c-pointers

// We can get the memory address of a variable with the reference operator &.
#include <stdio.h>
void main()
{
    int a = 45;

    printf("value of a is %d.\n", a);
    printf("The memory address of variable a is %p.\n", &a);
    printf("The memory address of variable a is %x (unsigned hexadecimal).\n", &a);
    // Output:
    // value of a is 45.
    // The memory address of variable a is 000000e68a3ff6dc.
    // The memory address of variable a is 8a3ff6dc (unsigned hexadecimal).

    /*
    In the example avove, &a is also known as a pointer.

    A pointer is a variable that store the memory address of another variable as its value.

    A pointer variable points to a data type (like int) of the same type and created with * operator.
    The address of the variable you're workinf with is assigned to the pointer.
    */

    int b = 456;   // An int variable
    int *ptr = &b; // A pointer variable, with the name ptr, that store the address of b.

    // Output the value of b;
    printf("value of b is %d.\n", b);

    // Output the memory address of b with address of b:
    printf("Pointer address for b is (by &b): %p.\n", &b);

    // Output the memory address of b with the pointer is:
    printf("Pointer address for b is (by ptr): %p.\n", ptr);

    // value of b is 456.
    // Pointer address for b is (by &b): 000000dd91fffd80.
    // Pointer address for b is (by ptr): 000000dd91fffd80.

    // Example explained
    // Create a pointer variable with the name ptr, that points to an int variable (b). Note that the type of the pointer has to match the type of the variable you're working with.

    // Use the & operator to store the memory address of the b variable, and assign it to the pointer.

    // Now, ptr holds the value of b's memory address.

    // Dereference
    // In the example above, we used the pointer variable to get the memory address of a variable (used together with the & reference operator).

    // However, you can also get the value of the variable the pointer points to, by using the * operator (the dereference operator):


    int c = 2;
    int *ptr_C;
    ptr_C= &c;

    printf("%p\n", ptr_C); // Reference: Output the memory address of c with the pointer.
    printf("%d\n", *ptr_C); // Dereference: Output the value of c with the pointer
    printf("%d\n", ptr_C);
    // Output:
    // 0000007ce37ff884
    // 2
    // -478152572 {{ int version of "0000007ce37ff884" may be.}}
}

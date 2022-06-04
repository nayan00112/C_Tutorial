// If we declar the int pointer, then this in pointer cannot point to the float variable or some other type of variable, i.e. it can point only int type variable.
// To overcome this problem, we use a pointer to void.
// A pointer to void means a generic pointr  that can point to any  data type to the void pointer and a void pointer can be assigned to any type of the pointer without performing any explicit typecasting.

#include <stdio.h>
void main(){

    int a = 7;
    char c = 'a';
    void *p;
    p = &a;

    printf("Memory address id int a is %u.\n", p);

    p = &c;
    printf("Memory address id char c is %u.\n", p);
}

// Output:
// Memory address id int a is 740292356.
// Memory address id char c is 740292355.
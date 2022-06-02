#include<stdio.h>
void main(){
    int a = 4;
    int *b  =&a;
    int **c = &b;

    printf("the value of a is %d.\n", a);
    printf("the pointer of a is %x.\n", &a);
    printf("the pointer of a is %x.\n", b);
    printf("the value  of a in pointer b is %d.\n", *b);
    printf("the pointer of b is %x.\n", &b);
    printf("the pointer of b is %x.\n", c);
    printf("the value  of a in pointer c is %d.\n", **c);

}

// Output:
// the value of a is 4.
// the pointer of a is e93ff9b4.
// the pointer of a is e93ff9b4.
// the value  of a in pointer b is 4.
// the pointer of b is e93ff9a8.
// the pointer of b is e93ff9a8.
// the value  of a in pointer c is 4.

//https://www.javatpoint.com/c-pointer-to-pointer
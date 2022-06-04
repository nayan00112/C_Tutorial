// const Pointer in C:
/*
A constant pointer in C cannot change the address of the variable to which it is pointing, 
i.e. the address will remaain constant.
Therefore, we can say that if a constant pointer is pointing to some variable, then it cannot point to any other variable.
*/

#include<stdio.h>
void main(){
    char ch = 'n';
    char *vp = &ch;
    char *const p = &ch;

    printf("%d\n", sizeof(ch)); // 1
    printf("%d\n", sizeof(vp)); // 8
    printf("%d\n", sizeof(p)); // 8

}
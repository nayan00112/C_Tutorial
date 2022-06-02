#include<stdio.h>
void main(){
    int a;
    int *p = &a;
    printf("The value of pointer p is : %u\n", p);
    p = p - 1;
    printf("Now, the value of pointer p is : %u\n", p);
    p = p + 1;
    printf("Now, the value of pointer p is : %u\n", p);
// Output:
// The value of pointer p is : 1583349220
// Now, the value of pointer p is : 1583349216
// Now, the value of pointer p is : 1583349220
}
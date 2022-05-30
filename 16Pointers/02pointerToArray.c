
// I am not understand this now.
#include <stdio.h>
void main(){
    int arr[4]={1,3,5,8};
    int *p;
    p = arr; // Variable p of type pointer is pointing to the address of an integer array arr.
    for (int i = 0; i<=3; i++){
        printf("Array value is %d.\n", arr[i]);
        printf("Array value is %x.\n\n", p[i]);
    }
}

// Output:
// Array value is 1.
// Array value is 1.

// Array value is 3.
// Array value is 3.

// Array value is 5.
// Array value is 5.

// Array value is 8.
// Array value is 8.
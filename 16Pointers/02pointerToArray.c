
// I am not understand this now.
#include <stdio.h>
void main(){
    int arr[4]={1,3,5,8};
    int *p[4];
    p[4] = arr; // Variable p of type pointer is pointing to the address of an integer array arr.

    // Let's Print its value.
    for (int i = 0; i<=3; i++){
        printf("Array value is %d.\n", arr[i]);
        printf("Array pointer value is %x.\n\n", p[i]);
    }
}

// Output:

// Array value is 1.
// Array pointer value is d768dfc8.

// Array value is 3.
// Array pointer value is f8117210.

// Array value is 5.
// Array pointer value is 0.

// Array value is 8.
// Array pointer value is f8117080.
#include<stdio.h>
void main(){
    //Logical Operators
    /*
        && LOGICAL AND
        || LOGICAL OR
        ! LOGICAL NOT
    */

int a = 1, b = 4, c = 6;

// Logical AND (&&):
   printf("\n%d", (a<b)&&(b<c)); // True with and operator 1
   printf("\n%d", (b<b)&&(b<c)); // False with and operator 0

// Logical OR (||):
   printf("\n%d", (a<b)||(b>c)); // True with and operator 1
   printf("\n%d", (b<b)||(b>c)); // False with and operator 0

// Logical NOT (!): 
   printf("\n%d", !(a<b)); // False with and operator 0
   printf("\n%d", !(b<b)); // True with and operator 1

}
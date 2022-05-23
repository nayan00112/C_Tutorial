#include<stdio.h>
void main(){
    int a = 2, b = 4;
    
    // increment operator
    // ++a (pre increment), a++ (post increment)

    // decrement operator
    // --a (pre decrement), a-- (post decrement)


    printf(" the value of a is : %d\n", a); 
    // output is 2
    
    printf(" the value of a is : %d\n", a++); 
    // output is 2, not 3 because it is assign first and then after increase in post increment.

    a = 2; // now value of a is 2.

    printf(" the value of b is : %d\n", ++a);
    // output is 3, first increment and then after assign in pre increment.


    printf(" the value of b is : %d\n", b); 
    // output is 4
    
    printf(" the value of b is : %d\n", b--); 
    // output is 4, not 3 because it is assign first and then after increase in post decrement.

    b = 4; // now value of b is 4.

    printf(" the value of b is : %d\n", --b);
    // output is 3, first increment and then after assign in pre post decrement.



}
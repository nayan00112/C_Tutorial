#include <stdio.h>
extern int Globle_Variable_number = 23; // ectern variable (in globle)
void main()
{
    // We can share a variable in muiltiple C sourse files by using an external variable.
    // To declare an external variable, you need to use extern keyword.
}

/*
#include <stdio.h>
#include "myfile.h" 

void printValue(){
    pritnf("Globle variable: %d." Globle_Variable_number);
}

*/
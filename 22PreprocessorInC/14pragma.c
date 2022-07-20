#include <stdio.h>
void abc();
void xyz();

#pragma startup abc
#pragma exit xyz

int main()
{
    printf("\nThis is Main.\n");
    return 0;
}

void abc()
{
    printf("\nThis is abc.\n");
}

void xyz()
{
    printf("\nThis is xyz.\n");
}

/*
Output:
This is Main.
*/


// Problem:  Not Working as in refrance:
//  https://www.javatpoint.com/c-preprocessor-pragma

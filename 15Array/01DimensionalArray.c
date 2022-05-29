// One Dimensional Array

#include <stdio.h>
void main()
{
    int marks[5];

    int abc[3] = {34,56,78};

    marks[0] = 78;
    marks[1] = 89;
    marks[2] = 79;
    marks[3] = 86;
    marks[4] = 99;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }

    for (int j = 0; j < 4; j++)
    {
        printf(" abc = %d\n", abc[j]);
    }
}
/*
78
89
79
86
99
 abc = 34
 abc = 56
 abc = 78
 abc = 78
*/

//https://www.javatpoint.com/c-array
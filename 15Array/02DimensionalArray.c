// Two Dimensional Array

#include <stdio.h>
void main()
{
    int a[3][5] = {{1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}, {3, 4, 3, 2, 5}};

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" value: %d, %d : %d\n", i, j, a[i-1][j-1]);
        }
    }
}

//  value: 1, 1 : 1
//  value: 1, 2 : 2
//  value: 1, 3 : 3
//  value: 1, 4 : 4
//  value: 1, 5 : 5
//  value: 2, 1 : 5
//  value: 2, 2 : 4
//  value: 2, 3 : 3
//  value: 2, 4 : 2
//  value: 2, 5 : 1
//  value: 3, 1 : 3
//  value: 3, 2 : 4
//  value: 3, 3 : 3
//  value: 3, 4 : 2
//  value: 3, 5 : 5

// https://www.javatpoint.com/two-dimensional-array-in-c
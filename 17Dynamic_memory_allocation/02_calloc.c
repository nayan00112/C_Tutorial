#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;
    printf("Enter the number: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    printf("Enter the %d values: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("You Entered Values is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    

    return 0;
}


// Output:

// (1)--------------------------------------------

// Enter the number: 5
// Enter the 5 values: 
// 5
// 3
// 5
// 3
// 2
// You Entered Values is :
// 5
// 3
// 5
// 3
// 2

// (2)--------------------------------------------

// Enter the number: 2
// Enter the 2 values: 
// 4 6
// You Entered Values is :
// 4
// 6

// (3)--------------------------------------------

// Enter the number: 3
// Enter the 3 values: 
// 3 5 6 7
// You Entered Values is :
// 3
// 5
// 6
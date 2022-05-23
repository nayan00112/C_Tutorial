#include <stdio.h>
void main()
{
    int num, i;
    printf("Enter integer value: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
}

/*
Output:
Enter integer value: 5
1
2
3
4
5
*/

/*
Infinitive for loop  in C:
To make a for loop infinity, we need not give any expression in the syntex.
Insted of that, we need to provide two semicolons to validate the syntex of the  for loop.
This will work as an infinite for loop.
    for(;;)
    {
        printf("Infinity\d");
    }
*/
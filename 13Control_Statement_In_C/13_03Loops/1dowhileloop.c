#include <stdio.h>
void main()
{
    printf("Example of do while in C loop:\n");

    int a = 0;
    int b = 5;

    do
    {
        printf("%d\n", a);
        a++;
    } while (a <= 5); // true condition until a = 5.

    do
    {
        printf("%d\n", b);
        b--;
    } while (b <= 1); // false condition (5 <= 1 is false) so only 1 time executed.
}

// Output:
/*
0
1
2
3
4
5
5
*/

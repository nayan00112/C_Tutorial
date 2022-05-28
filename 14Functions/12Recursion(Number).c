#include <stdio.h>

int number(int);
void main()
{
    int i = 8;
    number(i);
}
int number(int x)
{
    if (x >= 1)
    {
        printf("%d\n", x); // print 8 to 1.
        number(x - 1);
        //printf("%d\n", x); // print 1 to 8.
    }
    else
    {
        return 0;
    }
}


// Output:
// 8
// 7
// 6
// 5
// 4
// 3
// 2
// 1

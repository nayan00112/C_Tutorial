#include <stdio.h>
#include<string.h>
int main()
{
    char a[10] = "Nayan";
    char b[10] = "Patel";
    char c[10] = "Nayan";

    if (strcmp(a, b) == 0)
    {
        printf("A and B same string.");
    }
    else if (strcmp(a, c) == 0)
    {
        printf("A and C same string.");
    }

    return 0;
}

/*
Output:
A and C same string.
*/
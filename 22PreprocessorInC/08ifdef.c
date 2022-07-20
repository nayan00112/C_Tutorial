#include <stdio.h>
#define A 2
#undef A // New Compare privious.
int main()
{

#ifdef A
    printf("%d", A);
#else
    int a = 4;
    printf("%d", a);
#endif
    return 0;
}

/*
Output:
4
*/
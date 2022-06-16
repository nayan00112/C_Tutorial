#include <stdio.h>

int main()
{
    char a[] = "Pink";
    char *p = "Black";
    // a = "Black"; ERROR

    printf("1. %s\n", a);
    printf("1.pointer %s\n", p);

    p = "Red";
    printf("2. %s\n", a);
    printf("2.pointer %s\n", p);

    p = "Blue";
    printf("3. %s\n", a);
    printf("3.pointer %s\n", p);

    return 0;
}

/*
Output:

1. Pink
1.pointer Black
2. Pink
2.pointer Red
3. Pink
3.pointer Blue

pointer char array (String) can change it's value.
*/
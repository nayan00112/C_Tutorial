#include <stdio.h>

int main()
{
    // ERROR:
    // char s[] = "Hello C";
    // char t[];
    // char *p = s;
    // printf("%s\n", s);
    // t = p; // Does not copy.
    // printf("%s\n", t);

    // DONE:
    char s[] = "Hello C";
    char *t;
    char *p = s;
    printf("%s\n", s);
    t = p; // Does Copy.
    printf("%s\n", t);

    return 0;
}

/*
Output:
Hello C
Hello C
*/



/*
Once a string is defined, it cannot be reassigned to another set of characters.
However, using pointers, we can assign the set of characters to the string.
{Refer Next Code}
*/
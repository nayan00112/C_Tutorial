// https://www.javatpoint.com/c-strings

// Traversing String:
/*
    Traversing the string is one of the most important aspects in any of the programming languages.
    We may need to manipulate a very large text which can be done by traversing the text.
    Traversing string is somewhat different from the traversing an integer array. We need to know the length of the array to traverse an integer array,
    whereas we may use the null character in the case of string to identify the end the string and terminate the loop.

Hence, there are two ways to traverse a string.

    > By using the length of string
    > By using the null character.
*/

#include <stdio.h>

int main()
{
    int count = 0, v = 0, i = 0;
    char c[9] = "Tutorial";

    // > By using the length of string
    while (i < 9)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'o' || c[i] == 'o' || c[i] == 'u')
        {
            count++;
        }
        i++;
    }
    printf("By using the length of string, vowels no is: %d\n", count);

    count = 0;
    i = 0;

    // > By using the null character.
    while (c[i] != NULL)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'o' || c[i] == 'o' || c[i] == 'u')
        {
            count++;
        }
        i++;
    }

    printf("By using the null character, vowels no is: %d\n", count);

    return 0;
}

// Output:
/*
By using the length of string, vowels no is: 3
By using the null character, vowels no is: 3
*/
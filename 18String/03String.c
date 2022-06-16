// https://www.javatpoint.com/c-strings

// Accepting string as the input
/*
    Till now, we have used scanf to accept the input from the user.
    However, it can also be used in the case of strings but with a different scenario.
    Consider the below code which stores the string while space is encountered.
*/

#include <stdio.h>

int main()
{
    char name1[50];

    printf("1. Enter your name: ");
    scanf("%s", name1);
    printf("Your full name is : %s.\n", name1);
    /* Output:
    Enter your name: Patel Nayankumae Ashokbhai
    Your full name is : Patel.
    */

    return 0;
}

/*
    It is clear from the output that, the above code will not work for space separated string.
    To make this code working for the space separated string, the minor changes required in the scanf function, i.e., instead of writing scanf("%s", name), we must wire: scanf("%[^\n]s", s) which instructs the compilar to store the string name while the new line (\n) is encountered.
    Let's consider the following example to store the space-separated strings.
    {Refer Next Code}
    
    Here We must also notice thet we do not have to use address of (&) operator in scanf to store a striong since name is an array of characters and the name of the array, 
    i.e., name insicates the base assress of the string (character array) therefore we need not use & with it.
*/
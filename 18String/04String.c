#include <stdio.h>

int main()
{
    char name2[50];
    printf("2. Enter your name: ");
    scanf("%[^\n]s", name2);
    printf("Your full name is : %s.", name2);
    return 0;
}

// Output:
// 2. Enter your name: Patel Nayankumar Ashobhai
// Your full name is : Patel Nayankumar Ashobhai.

/*
Here We must also notice thet we do not have to use address of (&) operator in scanf to store a striong since name is an array of characters and the name of the array,
i.e., name insicates the base assress of the string (character array) therefore we need not use & with it.
*/
// Some important points:

/*
https://www.javatpoint.com/c-strings


However, there are the following points which must be noticed while entering the strings by using scanf.
    > The compiler doesn't perform bounds checking on the character array.
      Hence, there can be a case where the length of the string can exceed the dimension of the character array which may always overwrite some important data.
    > Instead of using scanf,
      we may use gets() which is an inbuilt function defined in a header file string.h.
      The gets() is capable of receiving only one string at a time.
*/

#include <stdio.h>
#include <string.h> // NEW
int main()
{
    char a[50];
    printf("Enter Your Name: ");
    gets(a);
    printf("Your Name is : %s.", a);
    return 0;
}

/*
Output:

Enter Your Name: Marmik Patel
Your Name is : Marmik Patel.
*/
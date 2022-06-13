#include <stdio.h>
#include <string.h>
int main()
{
    /*
        Thestring can be defined as the one dimension array of charactors terminated by a null ('\0').
        The charactor array or the string is used to manipulate text such as word or sentences.
        Each charactorin the array occupies one byte or memory and the last charactor must always be 0.
        The termination charactor ('\0') is important in a string since it is the only way to identify where the string ends.
        When we define a string as char s[10], the character s[10] is implicitly initialized with the null  in the memory.

        There are two way to declare a string in c language.
            1. By char array
            2. By string literal

        1. By char array:
            Example:
                char ch[6] = {'n', 'a', 'y', 'a', 'n', '\0'};

            While declaring string, size is not mandatory.
            So we can write the above code as given below:
            Example:
                char ch[] = {'n', 'a', 'y', 'a', 'n', '\0'};

        2. By string literal:
            Example:
                char ch[] = "nayan";

            In such case, '\0' will be appended at the end of the string by the compiler.

        Difference between char array and string literal:
            There are two main difference between char aray and literal:
                > We need to add the null  character '\0' at the end of the array by ourself whereas,
                  it is appendend internally by the compiler in the case of the character array.
                > The string literal cannot be reassigned to another set of charactors whereas,
                  we can reassign the characters of the array.

        The '%s' is used as a format specifiers for the string in c language.

    */

    char ch1[6] = {'n', 'a', 'y', 'a', 'n', '\0'};
    char ch2[] = {'n', 'a', 'y', 'a', 'n', '\0'};
    char ch3[] = "nayan";

    printf("%s \n", ch1); // nayan
    printf("%s \n", ch2); // nayan
    printf("%s \n", ch3); // nayan

    return 0;
}
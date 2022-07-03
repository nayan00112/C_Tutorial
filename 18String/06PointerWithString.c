/*
We have used pointers with the array, function and primitive data type so far.
However, pointer can be used to point to the string.
There are various advantages of using pointers to point string.
Let us consider the following example to access the string via the pointer.
*/

#include<stdio.h>

int main(){
    char s[12] = "OkCLanguage";
    char *p = s; // Pointer p is pointing to string s.
    printf("%s", p); // The string  s is pointed if we print p.
    return 0;
}
// Output:
// OkCLanguage

/*
As we know that string is an array of charactors, the pointers can be used in the same way they were with array.
In the above example, p is declared as a pointer to the  array of characters s.
P affects similar to s since s is the base address of the string and treated as a pointer initially.
However, we can not change the content of c or copy the content of s intoi another string directly.
For this purpose, we need to  use the pointer to store the string.
In the following example, we have shown the use of pointers to copy the contant of a string into another.
{refer next code.}
*/
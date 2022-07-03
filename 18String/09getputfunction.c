// Reference: https://www.javatpoint.com/c-gets-puts

// get and put functions.

#include<stdio.h>
#include<string.h>
int main(){
    char a[4];
    printf("Enter your name: ");
    gets(a);

    printf("Your name is: ");
    puts(a);

    return 0;
}

// Output:
// Enter your name: Nayan Patel
// Your name is: Nayan Patel

// BUT Our Array max. 4 char only?....

/*
The gets() function is risky to use since it doesn't perform any array bound checking and keep reading the characters until the new line (enter) is encountered.
It suffers from buffer overflow, which can be avoided by using fgets(). 
The fgets() makes sure that not more than the maximum limit of characters are read. Consider the following example.
*/
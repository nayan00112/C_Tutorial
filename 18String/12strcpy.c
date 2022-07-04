#include <stdio.h>
#include <string.h>
int main()
{
    char a[10] = "Nayan";
    char b[10] = "Patel";
    puts(a); // Nayan
    puts(b); // Patel

    strcpy(a, b);

    puts(a); // Patel {copy b to a.}
    return 0;
}
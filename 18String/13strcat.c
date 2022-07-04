#include <stdio.h>
#include <string.h>
int main()
{
    char a[10] = "Nayan";
    char b[10] = "Patel";
    puts(a); // Nayan
    puts(b); // Patel

    strcat(a, b);

    puts(a); // Nayan Patel {Connact two string a and b}
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char a[15] = "Nayan Patel";
    puts(a); // Nayan Patel

    strlwr(a);

    puts(a); // nayan patel
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char a[15] = "Nayan Patel";
    puts(a); // Nayan Patel

    strupr(a);

    puts(a); // NAYAN PATEL
    return 0;
}
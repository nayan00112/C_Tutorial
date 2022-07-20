#include <stdio.h>
#define PI 3.14
int main()
{

#ifndef PI
    float pi = 3.14;
    printf("#f", pi);
#else
    printf("PI is: 3.14"); // PI is: 3.14
#endif
    return 0;
}
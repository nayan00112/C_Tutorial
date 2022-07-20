#include <stdio.h>
// Not define PI. (Changes in privious)
int main()
{

#ifndef PI
    float pi = 3.14;
    printf("%f", pi); // 3.140000
#else
    printf("PI is: 3.14"); 
#endif
    return 0;
}
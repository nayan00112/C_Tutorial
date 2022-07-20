// Let's see an example of #define to create a macro.

#include<stdio.h>

#define MAX(a,b) ((a>b)?(a):(b))
#define MIN(a,b) ((a>b)?(b):(a))

int main(){
    printf("Max. num in 4 and 5 is : %d\n", MAX(4,5));
    printf("Min. num in 4 and 5 is : %d", MIN(4,5));
    return 0;
}

// Output:
// Max. num in 4 and 5 is : 5
// Min. num in 4 and 5 is : 4
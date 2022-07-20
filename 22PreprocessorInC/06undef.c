/*
#undef in C

The #undef preprocessor directive is used to undefine the constant or macro defined by #define.

Syntax:
#undef token

let's see a simple example to define and undefine a constant.
*/
//      #include<stdio.h>
//      #define PI 3.14
//      #undef PI // Ihis is reason of err.
//      int main(){
//          printf("value of PI is: %f", PI);
//          return 0;
//      }

// Output:
// Give error.


//_______________________________________________________________________________________________________________


/*
The #undef directive is used to define the preprocessor constant to a limited scope so that you can declare constant again.
Let's see an example where we are defining and undefining number variable.
But before being undefined, it was used by squart variable.
*/

#include<stdio.h>
#define num 12
int a = num * num;
#undef num
int main(){
    printf("12 * 12 = %d", a); // 12 * 12 = 144
    return 0;
}

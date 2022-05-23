#include <stdio.h>
void main()
{

    /* There are two way to define constant in C programming.
        1. const keyword
        2. #define preprocessor

        The value of constant can not change.
    */

    const float PI = 3.14;       // const keyword
    const int circleRadious = 4; // const keyword

#define ABC 5.65 // #define preprocessor.

    printf("The dayameer of circle is %f unit.\n", 2 * circleRadious * PI);
    // Output: The dayameer of circle is 25.120001 unit.

    printf("The dayameer of circle is %.2f unit.\n", 2 * circleRadious * PI);
    // Output: The dayameer of circle is 25.12 unit.

    printf("The value of constant ABC is %f.\n", ABC);
    // Output: The value of constant ABC is 5.650000.
    
}
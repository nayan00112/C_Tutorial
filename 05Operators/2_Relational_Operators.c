#include <stdio.h>
void main()
{
    /*
    Relational Operatior:

        < is less than
        >= is less than or equal to
        > is grater than
        >= is grater than or equal to
        == is equal to
        != is not equal to

    */

    printf("\n%d", 3 < 4);  // True so output is 1
    printf("\n%d", 3 > 4);  // False so output is 0
    printf("\n%d", 5 <= 5); // True 1
    printf("\n%d", 4 <= 1); // False 0
    printf("\n%d", 7 <= 8); // True 1
    printf("\n%d", 7 != 8); // True 1
    printf("\n%d", 6 != 6); // False 0
    printf("\n%d", 2 == 8); // False 0
    printf("\n%d", 9 == 9); // True 1

    // output:
    /*
    1
    0
    1
    0
    1
    1
    0
    0
    1
    */
}
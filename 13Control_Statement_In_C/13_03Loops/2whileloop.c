#include <stdio.h>
void main()
{
    int a = 1;
    while (a <= 10)
    {
        printf("Hello %d\n", a);
        a++;
    }
    /*
    Output:
    Hello 1
    Hello 2
    Hello 3
    Hello 4
    Hello 5
    Hello 6
    Hello 7
    Hello 8
    Hello 9
    Hello 10
    */
}

/*
Infinitive while loop in C:

If the expression passed in while loop results in any non-zero value then the loop will run the infinite numeber of times.
    while(1){
        //Statement
    }

1 is true.
0 is false.
*/
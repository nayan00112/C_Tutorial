#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *cptr;
    cptr = (int *)malloc(5 * sizeof(int));
    printf("Enter 5 integer :\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", cptr + i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf(">>>>%d\n", *(cptr + i));
    }
    cptr = (int *)realloc(cptr,5 * sizeof(int));

    for (int i = 5; i < 10; i++)
    {
        scanf("%d", cptr + i);
    }
    for (int i = 5; i < 10; i++)
    {
        printf(">>>>%d\n", *(cptr + i));
    }
    return 0;
}

/*

Enter 5 integer :
6 7   
5
3
2
>>>>6
>>>>7
>>>>5
>>>>3
>>>>2
2
3
4
5
6
>>>>2
>>>>3
>>>>4
>>>>5
>>>>6


*/
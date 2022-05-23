#include <stdio.h>
void main()
{
    int std;
    printf("Which standred is in you? ");
    scanf("%d", &std);
    if (std > 0 && std <= 8)
    {
        printf("you are in primary.\n");
        if (std <= 4)
        {
            printf("Hay, You can go to play room in free period.\n");
        }
        else
        {
            printf("You need to have permition from teacher to visit play room.\n");
        }
        if (std >= 7)
        {
            printf("Hay, You can go to home in free period with permition.\n");
        }
        else
        {
            printf("you cannot go home in free period.\n");
        }
    }
    else
    {
        if (std <= 0)
        {
            printf("Inviled input.\n");
        }
        else
        {
            printf("You are not in primary.\n");
        }
    }
}
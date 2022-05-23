#include <stdio.h>

void main()
{
    int a;
    int winCode = 0345;
    printf("Enter the lottery Code: ");
    scanf("%d", &a);
    if (a == winCode)
    {
        printf("Congratulation!, You win Car.");
    }
    if (a != winCode)
    {
        printf("Bad Luck! Try Again");
    }
}
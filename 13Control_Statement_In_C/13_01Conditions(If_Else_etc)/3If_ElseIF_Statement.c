#include <stdio.h>

void main()
{
    int a;
    int winCode1 = 1001;
    int winCode2 = 1101;
    int winCode3 = 0001;

    printf("Enter the lottery Code: ");
    scanf("%d", &a);

    if (a == winCode1)
    {
        printf("Congratulation!, You win Car.");
    }
    else if (a == winCode2)
    {
        printf("Congratulation!, You win Bike.");
    }
    else if (a == winCode3)
    {
        printf("Congratulation!, You win Cycle.");
    }
    else{
        printf("Bad Luck!!! Try again");
    }
}
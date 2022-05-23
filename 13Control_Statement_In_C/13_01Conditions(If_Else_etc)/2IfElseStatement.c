#include <stdio.h>

void main()
{
    int a;
    int winCode = 1001;
    printf("Enter the lottery Code: ");
    scanf("%d", &a);
    if(a == winCode)
    {
        printf("Congratulation!, You win Car.");
    }
    else{
        printf("Bad Luck! Try Again");
    }
}
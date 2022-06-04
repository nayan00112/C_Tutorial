#include <stdio.h>
void ElectionValidation();

void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    ElectionValidation(age);
}

void ElectionValidation(int age)
{
    if (age > 18)
    {
        printf("You can voteing.\n");
    }
    else
    {
        printf("You can not voteing now.\n");
    }
}
/*
Output:
1.
Enter your age: 23
You can voteing.

2.
Enter your age: 2
You can not voteing now.
*/
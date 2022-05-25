#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main()
{
    printf("Welcomw to the Calculator:\n");
    printf("Only Numarical input allow.\n");
    int choise = 0;
    int num1, num2;
    while (choise != 5)
    {
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Muiltiplicatuon\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choise);
        if (choise != 5 && choise <= 4)
        {
            printf("Enter first number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);
        }
        else if (choise == 5)
        {
            printf("\nExist Done.\n");
            break;
        }
        else if (choise > 5)
        {
            printf("Invilid Input. Try again...\n");
        }

        switch (choise)
        {
        case 1:
            add(num1, num2);
            break;
        case 2:
            sub(num1, num2);
            break;
        case 3:
            mul(num1, num2);
            break;
        case 4:
            div(num1, num2);
            break;
        default:
            break;
        }
    }
}

int add(int x, int y)
{
    printf("%d + %d = %d\n", x, y, x + y);
    return 0;
}
int sub(int x, int y)
{
    printf("%d - %d = %d\n", x, y, x - y);
    return 0;
}
int mul(int x, int y)
{
    printf("%d * %d = %d\n", x, y, x * y);
    return 0;
}
int div(int x, int y)
{
    if (y != 0)
    {
        float i = (float)x / (float)y;
        printf("%d / %d = %.2f\n", x, y, i);
    }
    else
    {
        printf("Error, Divided by 0 \n");
    }
    return 0;
}

/*
Output:


Welcomw to the Calculator:
Only Numarical input allow.
1. Addition
2. Substraction
3. Muiltiplicatuon
4. Division
5. Exit
Enter your choice: 1
Enter first number: 43
Enter second number: 5
43 + 5 = 48
1. Addition
2. Substraction
3. Muiltiplicatuon
4. Division
5. Exit
Enter your choice: 2
Enter first number: 5
Enter second number: 6
5 - 6 = -1
1. Addition
2. Substraction
3. Muiltiplicatuon
4. Division
5. Exit
Enter your choice: 3
Enter first number: 8
Enter second number: 9
8 * 9 = 72
1. Addition
2. Substraction
3. Muiltiplicatuon
4. Division
5. Exit
Enter your choice: 4
Enter first number: 5
Enter second number: 0
Error, Divided by 0
1. Addition
2. Substraction
3. Muiltiplicatuon
4. Division
5. Exit
Enter your choice: 4
Enter first number: 3
Enter second number: 5
3 / 5 = 0.60
1. Addition
2. Substraction
3. Muiltiplicatuon
4. Division
5. Exit
Enter your choice: 8
Invilid Input. Try again...
1. Addition
2. Substraction
3. Muiltiplicatuon
4. Division
5. Exit
Enter your choice: 789
Invilid Input. Try again...
1. Addition
2. Substraction
3. Muiltiplicatuon
4. Division
5. Exit
Enter your choice: 5

Exist Done.

*/
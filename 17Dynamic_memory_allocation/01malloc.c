#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int)); // memory allocated using malloc
    if (ptr == NULL)
    {
        printf("Sorry! unable t23o allocate memory");
        exit(0);
    }

    for (i = 0; i < n; ++i)
    {
        printf("Enter elements of array: ");
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum=%d", sum);
    free(ptr);
    return 0;
}
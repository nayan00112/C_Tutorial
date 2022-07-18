#include <stdio.h>
void main()
{   
    char str[100];

    FILE *fp;
    fp = fopen("02SecondFile.txt", "r");
    if (fp == NULL)
    {
        printf("ERROR TO OPEN FILE.\n");
    }
    else
    {
        printf("%s", fgets(str, 100, fp));
    }
}

// Output:
// I am Nayan.
// In text file: I am Nayan.
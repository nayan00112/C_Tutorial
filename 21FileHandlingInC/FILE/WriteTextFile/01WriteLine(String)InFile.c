#include <stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter String: ");
    gets(str);

    FILE *fp;
    fp = fopen("03ThirdFile.txt", "w");
    if (fp == NULL)
    {
        printf("ERROR TO OPEN.\n");
    }
    else
    {
        for (int i = 0; i < strlen(str); i++)
        {
            fputc(str[i], fp);
        }
        fclose(fp);
        printf("Done.");
    }
}

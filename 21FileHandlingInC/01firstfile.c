#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char txt[100];
    fp = fopen("01MyFirstFile.txt", "w");
    if (fp == NULL)
    {
        printf("Error to generate file.");
    }
    else
    {
        printf("Enter Text to write on file: ");
        gets(txt);

        for (int i = 0; i < strlen(txt); i++)
        {
            fputc(txt[i], fp);
        }
        fclose(fp);
    }
    return 0;
}


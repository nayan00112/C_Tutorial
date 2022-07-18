#include <stdio.h>

void main()
{
    
    FILE *fp;
    fp = fopen("01FirstFile.txt", "r");
    if (fp == NULL)
    {
        printf("ERROR\n");
    }
    else
    {
        printf("%c", fgetc(fp));
    }
    fclose(fp);
}

// Output:
// H

// Inside file text: "Hello All, I am Nayan."
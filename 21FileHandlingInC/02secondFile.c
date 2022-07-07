// Read file using fscanf.

#include <stdio.h>

int main()
{
    char s[100];

    FILE *fp;
    fp = fopen("01MyFirstFile.txt", "r"); // File has text "First File Text."

    fscanf(fp, "%s", s);
    
    fclose(fp);
    printf("%s\n", s); // First
    return 0;
}
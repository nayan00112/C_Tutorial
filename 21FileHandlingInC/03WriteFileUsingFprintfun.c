#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char str[100] = "Hello To 3rd File Text.";
    fp = fopen("03File.txt", "w");
    fprintf(fp, "%s", str); // Hello To 3rd File Text. [in file]
    fclose(fp);

    // Appand Text:
    strcpy(str, "This is appand text.");
    fp = fopen("03File.txt", "a");
    fprintf(fp, "%s", str); // Hello To 3rd File Text.This is appand text. [in file]

    return 0;
}
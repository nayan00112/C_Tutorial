#include <stdio.h>

int main()
{
    FILE *f;
    char text[20];
    char text1[20];

    f = fopen("05file.txt", "w");
    fputs("05 Hello Nayan!!!", f); // 05 Hello Nayan!!! [in file]
    fclose(f);

    f = fopen("05file.txt", "r");
    printf("%s\n", fgets(text, 20, f)); // 05 Hello Nayan!!! [in console]
    fclose(f);

    return 0;
}
///////How to convert char assi with integer?


#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("03ThirdFile.txt", "r");
    int a, r = (int)'1' - 1, even[100], odd[100], i = 0, j = 0;
    a = (int)fgetc(fp);
    while (a != EOF)
    {
        if ((a - r) % 2 == 0)
        {
            even[i] = a - r;
            printf("%d : Even\n", a - r);
            i++;
        }
        else
        {
            odd[j] = a - r;
            printf("%d : Odd\n", a - r);
            j++;
        }
        a = (int)fgetc(fp);
    }
    fclose(fp);

    fp = fopen("ODD.txt", "w");
    while (0 < i)
    {
        fprintf(fp, "%d", odd[i]);
        i--;
    }
    fclose(fp);

    fp = fopen("EVEN.txt", "w");
    while (0 < j)
    {
        fprintf(fp, "%d", odd[j]);
        j--;
    }
    fclose(fp);

    printf("\nDone.");
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// // #include<string.h>
// int main()
// {
//     FILE *fp;
//     int i = 0, num[20];
//     fp = fopen("03ThirdFile.txt", "r");
//     char str[200];
//     while (!feof(fp))
//     {
//         fgets(str, 200, fp);

//         puts(str);
//     }
//     fclose(fp);
//     return 0;
// }

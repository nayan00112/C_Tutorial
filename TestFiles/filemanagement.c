#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("01.txt", "r");

    char a = fgetc(fp);
    while (a != EOF)
    {
        printf("%c", a);
        a = fgetc(fp);
    }
    
    fclose(fp);
    return 0;
}

// This is read file "01.txt" char by char and print on console.

/*
Output:
84
5
54
25
7
*/
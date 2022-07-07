#include<stdio.h>

int main(){
    FILE *p;
    p = fopen("04file.txt", "w");
    fputc('a', p); //a [in file]
    fclose(p);

    p = fopen("04file.txt", "r");
    printf("%c",fgetc(p)); //a [in console]
    fclose(p);
    return 0;
}
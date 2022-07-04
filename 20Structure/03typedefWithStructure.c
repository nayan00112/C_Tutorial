#include <stdio.h>
#include <string.h>
typedef struct Student
{
    char name[50];
    int rNo;
} stds;

int main()
{
    stds s1;
    // s1.name = "Rajesh";    ERROR, We cannot assign
    strcpy(s1.name, "Rajesh");
    s1.rNo = 45;

    printf("%s and %i", s1.name, s1.rNo); // Rajesh and 45
    return 0;
}
// https://www.javatpoint.com/c-union

//compiler use: https://www.onlinegdb.com/online_c_compiler
// Union

#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int dd;
    int mm;
    int yyyy;
    int rolnum;
    char city[10];
    int pincode;
    char phoneNo[14];
};

int main()
{
    struct student s1;
    strcpy(s1.name, "Nayan");
    s1.rolnum = 87;
    strcpy(s1.phoneNo, "98776");
    s1.dd = 1;
    s1.mm = 2;
    s1.yyyy = 3;
    strcpy(s1.city, "Anjar");
    s1.pincode = 3701;

    printf("%lu", sizeof(s1)); // 68
    return 0;
}

// more memory than privious...
// https://www.javatpoint.com/c-union

// Union

#include <stdio.h>
#include<string.h>
struct student
{
    char name[20];
    union dateOfBirth
    {
        int dd;
        int mm;
        int yyyy;
    } dob;

    int rolnum;
    union address
    {
        char city[10];
        int pincode;
    } addr;

    char phoneNo[14];
};

void main()
{
    struct student s1;
    //s1.name = "Nayan"; //Wrong Way, True way given below:
    strcpy(s1.name, "Nayan");

    s1.rolnum = 87;
    //s1.phoneNo = "9876"; //Wrong Way, True way given below:
    strcpy(s1.phoneNo, "98776");
    s1.dob.dd = 1;
    s1.dob.mm = 2;
    s1.dob.yyyy = 3;
    //s1.addr.city = "Anjar"; //Wrong Way, True way given below:
    strcpy(s1.addr.city, "Anjar");
    s1.addr.pincode = 3701;

    printf("%ld", sizeof(s1)); //56
}


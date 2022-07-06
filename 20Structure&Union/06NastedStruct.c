#include <stdio.h>
struct contact
{
    long int phoneNo;
    char email[256];
};

struct villagers
{
    char name[100];
    struct contact cont;
};

int main()
{
    struct villagers v[2];

    printf("Enter name, phoneno, email: of villager 1: \n");
    scanf("%s %d %s", v[0].name, &v[0].cont.phoneNo, v[0].cont.email);

    printf("Enter name, phoneno, email: of villager 1: \n");
    scanf("%s %d %s", v[1].name, &v[1].cont.phoneNo, v[1].cont.email);

    printf("1st villagers:\n %s %d %s\n", v[0].name, v[0].cont.phoneNo, v[0].cont.email);
    printf("2nd villagers:\n %s %d %s\n", v[1].name, v[1].cont.phoneNo, v[1].cont.email);
    return 0;
}

/*
Output:
Enter name, phoneno, email: of villager 1:
ramanbhai 23242 r1@g.c
Enter name, phoneno, email: of villager 1:
damanbhai 34563 d2@g.c
1st villagers:
 ramanbhai 23242 r1@g.c
2nd villagers:
 damanbhai 34563 d2@g.c
*/
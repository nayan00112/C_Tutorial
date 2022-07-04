#include <stdio.h>
#include <string.h>

struct Students
{
    int rolNo;
    char name[50];
};

void main()
{
    struct Students arrStu[2];

    arrStu[0].rolNo = 1;
    strcpy(arrStu[0].name, "Raj");

    arrStu[1].rolNo = 2;
    strcpy(arrStu[1].name, "Jay");

    printf("rol. no. is %d, name is %s.\n", arrStu[0].rolNo, arrStu[0].name);
    printf("rol. no. is %d, name is %s.\n", arrStu[1].rolNo, arrStu[1].name);
}

// Output:
// rol. no. is 1, name is Raj.
// rol. no. is 2, name is Jay.
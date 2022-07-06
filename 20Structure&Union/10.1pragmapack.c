#include<stdio.h>
#pragma pack(1)
struct base
{
    int a;
    char b;
    double c;

};

int main(){
    struct base var;
    printf("%d", sizeof(var)); // 13
    // see next code 10.2 for without "#pragma pack(1)"
    return 0;
}

//https://www.javatpoint.com/structure-padding-in-c
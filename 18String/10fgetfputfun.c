#include<stdio.h>
#include<string.h>
int main(){
    char a[4];
    printf("Enter your name: ");
    fgets(a, 4, stdin); // what is stdin?

    printf("Your name is: ");
    puts(a);

    return 0;
}

/*
Output:
Enter your name: nayan
Your name is: nay
{nay and one empty charactor '\0' total 4.}
*/
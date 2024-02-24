#include <stdio.h>

void ok(int);
int main()
{
    void (*ok_ptr)(int) = &ok;
    (*ok_ptr)(10);

    return 0;
}
void ok(int a){
    printf("hello %d", a);
}

// output:
// hello 10
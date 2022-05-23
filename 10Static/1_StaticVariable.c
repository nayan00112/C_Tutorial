#include <stdio.h>

int x = 1; // Globle variable
static int y = 1; // Globle Static variable

void fun1(){
    int a = 0;
    static int b = 0;
    a++;
    b++;
    x++;
    y++;
    printf("The value of a is: %d\n", a);
    printf("The value of static int b is: %d\n", b);
    printf("The value of globle x is: %d\n", x);
    printf("The value of globle static y is: %d\n", y);
}

void main(){
    fun1(); // a = 1, b = 1, x = 2, y = 2
    fun1(); // a = 1, b = 2, x = 3, y = 3
    fun1(); // a = 1, b = 3, x = 4, y = 4
    fun1(); // a = 1, b = 4, x = 5, y = 5
    
}

/*
Static variable are the variable which once declared, they get destroyed only when the program has completed its execution.
They have a propety of retaining their previous scope value if they are alrady declared once in the program.
They are different form normal variable because normalvariable do nt reatin their privious value.
Normal varalble because normal varable do not retain their previous value.
Normal variables get destroyed once they go out of scope. But when static variables are initialized, they get destroyed only after the whole program gets excuted.

Static variables are the varaiable that have propery to preserve their value from their previous scope.
It means that its value does not get re-initializes every time it is declared. 
It is different from normal variable because normal variables get destroyed as soon as thefunction in which it is declared completes its execution.
While the memory of static variables is allocated in the stack segement.
That is the reason why they are able to preserve the value of their privious scope.
*/


//Reference:
//https://www.javatpoint.com/static-in-c
//https://www.scaler.com/topics/static-variables-in-c/

#include<stdio.h>
void staticFun(){
    printf("Inside the static function staticFunc()");
}
void main(){
    /*
        As we know that non-static functions are global by default means that the function can be accessed outside the file also, but if we declare the function as static, then it limits the function scope. 
        The static function can be accessed within a file only.

        A static function in C a function thet has a scope that is limitdd to its object file.
        This means that the static function is only visible in its object file. 
        A sunction can be declared as static function by placing tha static keyword before the function name.

        An example that demonstrates this is givne as follows-
        There are two files first_file.c and second_file.c.
        The contents of these files are given as follows.

        Contents of first_file.c:
            static void staticFun(){
                printf("Inside the statc Function staticFunct()");
            }
        
        Contents of second_file.c:
            void main(){
                staticFun();
            }

        Now, if the above code is compiled then an error is obtained i.e. "undefined refrance to staticFun()".
        This happens as the function staticFun() is a static function and it is only visiable in its object file.


        A program that demonstrates static function in C is given as follows-

            #include<stdio.h>
            static vois staticFun(){
                printf("Inside the static function staticFunc()");
            }
            void main(){
                staticFun();
            }

            Output:
                Inside the static function staticFun()

        In the above program, the function staticFun() is a static function that prints 'Inside the static function staticFunc()'.
        The main() function calls staticFun().
        This program works correctly as the static function is calles only its own object file.
    */

   staticFun(); //Inside the static function staticFunc()
}
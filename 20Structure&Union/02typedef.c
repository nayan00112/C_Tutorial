/*
typedef in C

    The typedef is a keyword in C programming to provide some meaningful names to the alrady existing variable in the C program.
    It beheaves similarly as we defined the alias for the commands.
    In short, we can say that this keyword is used to redefine the name of an already existing variable.


Syntex of typedef

    typedef <existing_name> <alias_name>

    In the above syntax, 'existing_name' is the name of the an allrady existing variable name while 'alias_name' is another name given to the existing variable.
    For example, suppose we want to create a variables of this type.
    To overcome the problem, we use a typedef keyword.

    typedef unsigned int unit;

    In above statements, we have declared the unit variable of type unsigned int by using a typedef keyword.
    now we can create variables of typedef unsigned int by writing the following statement.
    
    unit a, b;

    instead of writing:

    unsigned int a, b;

    Till now, we have observed thet the typedef keyword provides a nice shortcut by providing an alternative name for an already existing variable.
    This keyword is useful when we are dealing with the long datatype especially, structure declarations.

*/

#include<stdio.h>
void main(){
    typedef unsigned int unit;

    unit i, j;
    i = 58;
    j = 89;
    printf("i = %d\n", i);
    printf("J = %d\n", j);
}

/*
Output:
i = 58
J = 89
*/
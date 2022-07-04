/*
C Structure

Why use structure?
    In C, there are cases where we need to store muiltiple attributes of an entity.
    It is not necessary that an entitiy has all the different attributes of different data types.
    For example, an entry Student may have its name(string), rol num.(int), marks(float).
    To store such type of information, we have the following approaches:
        > Construct individual arrays for storing names, roll number and marks.
        > Use a special data structure to store the collection of different  daat types.

What is Structure?
    Structure in c is a user-defined data  type that enables us to store the collection of different data types.
    Each element of a structure is called a member.
    Structure ca; simulate the use of classes and templetes as it can store various information.

    The struct keyword is used to define the structure.
    Lte's see the syntax to define the structure in c.


        struct structure_name
        {
            datatype1 member1;
            datatype2 member2;
            .
            .
            .
            datatypen membern;
        };

    example:

        struct Student
        {
            int rolno;
            char name[];
            float marks;
        };

        Here, 
            struct  - > Kwyword
            Student - > Name of the structure
            rolno, name, marks -> members or field of structure.


Declaration structure variable:
    We can declared a variable for the structure so that we can access the we can access teh member of the structure easily.
    There are two ways to declare structure variable.
        1. By struct keyword within main() function
        2. By declaring a variable at the time of defining the structre.

    1.First way:
    The structure variable shud be declared within the main function.

        struct employee
        {
            int id;
            char name[50];
            float salary;
        };

        Now write given code inside the main function.

            struct employee e1, e2;

    The variable e1 and e2 can be used to access the values stored in the structure.
    Here, e1 and e2 can be treated in the same way as the objects in C++ and Java.

    2.Second Way: (Which approach is good)
    Let's see another way to declare variable at the time of defining the structure.

        struct employee  
        {   
            int id;  
            char name[50];  
            float salary;
        }e1,e2;

    If number of variables are not fixed, use the 1st approach. 
    It provides you the flexibility to declare the structure variable many times.

    If no. of variables are fixed, use 2nd approach. 
    It saves your code to declare a variable in main() function.


Accessing members of the structure:
    There are two ways to access structure members:
        By . (member or dot operator)
        By -> (structure pointer operator)
    
    ex: e1.id = 4;

*/

#include<stdio.h>
#include<string.h>

struct Students
{
    int rolNo;
    char name[50];
}s1, s2;

void main(){
    s1.rolNo = 1;
    strcpy(s1.name, "Raj");

    s2.rolNo = 2;
    strcpy(s2.name, "Jay");

    printf("rol. no. is %d, name is %s.\n", s1.rolNo ,s1.name);
    printf("rol. no. is %d, name is %s.\n", s2.rolNo ,s2.name);
}

/*
Output:
rol. no. is 1, name is Raj.
rol. no. is 2, name is Jay.
*/

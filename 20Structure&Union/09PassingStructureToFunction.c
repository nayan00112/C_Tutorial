/*
Passing structure to function

    Just like other variables, a structure can also be passed to a function.
    We may pass the structure members into the function or pass the structure variable at once.
    Consider the following example to pass the structure variable employee to a fuction display() which used to display the details of an employee.
*/

#include <stdio.h>

struct address
{
    char city[20];
    int pin;
    char phone[14];
};

struct employee
{
    char name[20];
    struct address add;
};

void display(struct employee);

void main()
{
    struct employee emp;
    printf("Enter employee name, city, pin, phone: \n");
    scanf("%s %s %d %s", emp.name, emp.add.city, &emp.add.pin, emp.add.phone);
    display(emp);
}

void display(struct employee emp){
    printf("name, city, pin, mobileno is given below: \n");
    printf("-%s\n-%s\n-%d\n-%s\n", emp.name, emp.add.city, emp.add.pin, emp.add.phone);
}

/*
Output:

Enter employee name, city, pin, phone: 
Nayan Adipur 3701 706935
name, city, pin, mobileno is given below: 
-Nayan
-Adipur
-3701
-706935

*/
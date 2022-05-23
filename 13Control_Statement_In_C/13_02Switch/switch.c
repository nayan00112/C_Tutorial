// Switch Statement.
#include<stdio.h>
void main(){
    // The switch statement in C is an alternate to if-else-if ladder statement which allows us to execute muiltiple operations which allows us to execute muiltiple operations for the different possibles value of a single variable called switch variable.
    char a;
    printf("Enter the charactor (a to e): ");
    scanf("%c", &a);

    switch (a)
    {
    case 'a':
        printf("Great");
        break;
    case 'b':
        printf("Batter");
        break;
    case 'c':
        printf("Normal");
        break;
    case 'd':
        printf("Need improvement");
        break;
    case 'e':
        printf("Dont very, Try again");
        break;
    default:
        printf("Invilid inpute.");
        break;
    }

    /*
    1. The switch expression must be of an integer or charector type.
    2. The case value must be an integer or charecter constant.
    3. The case value can be used only inside the switch statement.
    4. The break statement in switch is not must. It is optional. If there is no break statement found in the case, all the cases will be excuted present after the matched case. It is known as fall throught the state of C switch statement.
    */

    //Nested switch case also possible.
}
// The conditional operator is also known as a ternaty operator.

// Syntex of a conditional  operator :
// Expression1 ? Expression2 : Expression3;

#include<stdio.h>
void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    (age>=18)?(printf("Eligiable for voting.")):(printf("Not Eligiable for voting."));
}

/*
1.Output: 
    Enter your age: 3
    Not Eligiable for voting.

2.Output:
    Enter your age: 18
    Eligiable for voting.
3.Output:
    Enter your age: 23
    Eligiable for voting.
*/

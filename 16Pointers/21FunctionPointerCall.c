#include<stdio.h>

int add(int, int);

void main(){
    printf("addition of 8 and 3 is %d.\n", add(8,3)); 
    
    int (*ptr)(int,int); //type (*ptr_name)(type1, type2…);  

    ptr = add; // not &add {See Privious example.}

    printf("addition of 8 and 3 using pointer call is %d.\n", (*ptr)(8,3)); 
    printf("address of add function %u.\n", *ptr); 

}

int add(int a, int b){
    return a + b;
}



// Output:
// addition of 8 and 3 is 11.
// addition of 8 and 3 using pointer call is 11.
// address of add function 3769573824.


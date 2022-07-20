#include<stdio.h>

#define A 92
int main(){
    
    #if (A >= 95)
    printf("Superb");
    #elif(A >= 85)
    printf("Great"); // Great
    #elif(A>=75);
    printf("Good");
    #else
    printf("Nice");
    #endif
    return 0;
}
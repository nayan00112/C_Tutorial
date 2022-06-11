#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr = (int*)malloc(2*sizeof(int));
    printf("Enter 2 numbers: \n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", ptr + i);
    }
     
    for (int i = 0; i < 2; i++)
    {
        printf("Numbers is : %d\n", *(ptr + i));
    }
    
    free(ptr);

    for (int i = 0; i < 2; i++)
    {
        printf("After Numbers is : %d\n", *(ptr + i)); // Garbage Value
    }

    return 0;
}

// Enter 2 numbers: 
// 32
// 2
// Numbers is : 32
// Numbers is : 2
// After Numbers is : -1960166192 // Garbage Value
// After Numbers is : 620 // Garbage Value
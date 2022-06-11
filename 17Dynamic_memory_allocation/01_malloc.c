#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, *ptr;

    printf("Enter the int number: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("Enter %d number: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The number you  entered: %d. \n", *(ptr + i));
    }
    
    
}

// Output

// 1

// Enter the int number: 3
// Enter 1 number: 
// 2
// 3
// 5
// The number you  entered: 2. 
// The number you  entered: 3.
// The number you  entered: 5.

// 2

// Enter the int number: 6 
// Enter 1 number: 
// 4 4 6 7 8 9
// The number you  entered: 4. 
// The number you  entered: 4.
// The number you  entered: 6.
// The number you  entered: 7.
// The number you  entered: 8.
// The number you  entered: 9.
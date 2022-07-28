#include<stdio.h>
int sum(int len, int arr[]);

int main(){
    int a[] = {2,4,6,7};
    printf("%d", sum(sizeof(a)/sizeof(a[0]), a));
    return 0;
}

int sum(int len, int arr[]){

int s;
    for (int i = 0; i < len; i++)
    {
        s += arr[i];
    }
    return s;
}


// Output:
// 19
//Function with argument and with return value.

#include<stdio.h>

float AreaOfCircle(float);
void main(){
    float r, a;
    printf("Enter Value of radious of circle to find its area: ");
    scanf("%f", &r);

    a = AreaOfCircle(r);

    printf("Area of circle is %.2f", a);
}

float AreaOfCircle(float r){
    return 3.14*r*r;
}
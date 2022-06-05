#include <stdio.h>

float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);

void main(){
    float a, b, result;
    a = 4.3;
    b = 6.2;

    float (*fp[4])(float, float);  // function pointer declaration.  
    fp[0] = add;
    fp[1] = sub;
    fp[2] = mul;
    fp[3] = div;

    result = (*fp[0])(a,b); // Calling function by pointer.
    printf("Add %f\n", result);

    result = (*fp[1])(a,b);
    printf("Sub %f\n", result);

    result = (*fp[2])(a,b);
    printf("Mul %f\n", result);

    result = (*fp[3])(a,b);
    printf("Div %f\n", result);
}


float add(float x, float y){
    return x + y;
}
float sub(float x, float y){
    return x - y;
}
float mul(float x, float y){
    return x * y;
}
float div(float x, float y){
    return x / y;
}



// Output:
// Add 10.500000
// Sub -1.900000
// Mul 26.660000
// Div 0.693548

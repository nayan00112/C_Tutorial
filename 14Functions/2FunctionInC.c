//Function without argument and with return value.


#include <stdio.h>
// int PIValue(); // You know new!!!
float PIValue();
void main(){
    float pi;
    pi = PIValue();
    printf("The value of PI is : %.2f\n", pi);
    printf("The value of PI with more accuracy is : %f\n", pi);
}

// int PIValue(){
//     float PI = 3.14159;
//     return PI;
// }
//Output below is not we wanted. so ve return type must be float in this case insted of int.
//The value of PI is : 3.00
//The value of PI with more accuracy is : 3.000000

float PIValue(){
     float PI = 3.14159;
     return PI;
}

// recommanded output:
//The value of PI is : 3.14
//The value of PI with more accuracy is : 3.141590

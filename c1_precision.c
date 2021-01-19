/*
Youngsoo Kim, 2021-01-19

Summing 1/11 11 times.
For FDTD Study
*/

#include <stdio.h>

int main() {
    float a;
    a = 1.0/11.0;
    
    if ( a + a + a + a + a + a + a + a + a + a + a == 1.0) {
        printf("equal\n");
    }else {
        printf("Not equal\n");
        float b = a + a + a + a + a + a + a + a + a + a + a ;
        printf("the sum is %.10f\n", b);
    }
    
    return 0;
}
/*
Youngsoo Kim, 2021-01-19

equation test
For FDTD Study
*/

#include <stdio.h>

int main () {
    float a = 1.0, b = 0.5, c;

    c = a + b;

    while (c != a) {
        b = b/2.0;
        c = a + b;
        printf("(a, b, c) = (%12g, %12g, %12g)\n", a, b, c);
    }

}
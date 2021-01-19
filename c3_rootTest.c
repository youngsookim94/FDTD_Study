/*
Youngsoo Kim, 2021-01-19

Square-root test.
For FDTD Study
*/

#include <math.h>
#include <stdio.h>

#define COUNT 24

int main () {
    float a = 2.0;
    int i;
    printf("a = %12g\n", a);
    printf("square-root calc.\n");
    for (i = 0; i < COUNT; i++) {
        a = sqrtf(a);
        printf ("a = %12g\n", a);
    }

    printf("square calc.\n");
    for (i = 0; i < COUNT; i++) {
        a = a * a;
        printf ("a = %12g\n", a);
    }
    printf("after the all calc.\n");
    printf("a = %12g\n", a);
    return 0;
}
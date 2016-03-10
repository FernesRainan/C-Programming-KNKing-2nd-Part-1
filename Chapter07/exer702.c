#include <stdio.h>

int main (void)
{
    float f;
    int i;

    f = 010E2f;
    printf("010E2 is %f\n", f);

    f = 32.1E+5f;
    printf("32.1E+5 is %f\n", f);

    i = 790;
    printf("0790 is wrong, 790 is %d\n", i);

    i = 100;
    printf("100_000 is wrong, 100 is %d\n", i);

    f = 3.978e-2f;
    printf("3.978e-2 is %f\n", f);

    return 0;
}



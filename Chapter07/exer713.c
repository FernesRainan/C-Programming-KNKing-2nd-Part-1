#include <stdio.h>

int main (void)
{
    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    printf(" %d\n", c*i);
    printf(" %f\n", f/c);
    printf(" %lf\n", f - d);
    printf(" %ld\n", s+m);
    printf(" %lf\n", d/s);
    printf(" %d\n", (int) f);

    return 0;
   }



//Calculating each variable size in the system//


#include <stdio.h>

int main (void)
{
    int a;
    short b;
    long c;
    float d;
    double e;
    long double f;

    printf("Size of int: %d bytes\n", sizeof(a));
    printf("Size of short: %d bytes\n", sizeof(b));
    printf("Size of long: %d bytes\n", sizeof(c));
    printf("Size of float: %d bytes\n", sizeof(d));
    printf("Size of double: %d bytes\n", sizeof(e));
    printf("Size of long double: %d bytes\n", sizeof(f));

    return 0;
}


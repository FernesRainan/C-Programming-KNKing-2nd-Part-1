#include <stdio.h>

int main (void)
{
    int i;

    i = 077;
    printf("077 is %d\n", i);

    i = 0x77;
    printf("0x77 is %d\n", i);

    i= 0XABC;
    printf("0XABC is %d\n", i);

    return 0;

}


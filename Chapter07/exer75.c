#include <stdio.h>

int main(void)
{
    char c;

    c = 'A';
    printf("'A' is %d\n", c);
    
    c = 0b1000001;
    printf("0b1000001 is %d\n", 0b1000001);
    
    c = 0101;
    printf("0101 is %d\n", c);

    c = 0x41;
    printf("0x41 is %d\n", c);

    return 0;
}



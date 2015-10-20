#include <stdio.h>

int main (void)
{
    int i, j;

    i=8; j=5;
    
    printf("%d\n", i/j);
    printf("%d\n", -i/j);
    printf("%d\n", i/-j);
    printf("%d\n", -i/-j);

    return (0);
}


#include <stdio.h>

int main (void)
{
    int j1, j2, j3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &j1, &j2, &j3);

    printf("The reversal is: %d%d%d\n", j3, j2, j1);

    return (0);
}


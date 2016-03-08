// Prints a table of squares using a for statement //
// int type limit n == 46340 //
// short int type limit n == 181 //

#include <stdio.h>

int main (void)
{
    long i, n;

    printf("This program prints a table of squares.\n");
    printf("enter number of entries in table: ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++)
        printf("%10ld%30ld\n", i, i * i);

    return 0;
}


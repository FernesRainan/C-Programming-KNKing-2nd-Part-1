// Prints a table of squares using an odd method //

#include <stdio.h>

int main (void)
{
    int i, n, odd = 1, square = 1;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf ("%d", &n);

    for (i = 1; i <= n ; i++){
        printf("%10d%10d\n", i, square);
        
        square += (odd += 2);
    }

    return 0;
}


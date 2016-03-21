// Prints a table of squares using a for statement //
// int type limit n == 46340 //
// short int type limit n == 181 //

#include <stdio.h>

int main (void)
{
    int i, n;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("enter number of entries in table: ");
    scanf("%d", &n);
    ch = getchar(); //when you input number n, you should press "enter"//
                    //that enter value remians, and you need to dispose it//

    for (i = 1; i <= n; i++) {
        printf("%10d%20d\n", i, i * i);
        if ((i % 24) == 0) {
            printf("Press Enter to continue...\n");
            ch = getchar() ;
        }
    }
    return 0;
}


// Printing a one-month calendar //

#include <stdio.h>

int main (void)
{
    int days, start, i;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);
    int gap = start - 1;

    while (start-- > 1) printf("   ");

    for (i = 1; i <= days ; i++){
        if ((gap + i) % 7 == 0) printf("%2d\n", i);
        else printf("%2d ", i);
    }

    return 0;
}



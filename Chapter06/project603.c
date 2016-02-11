// Reducing the fraction to lowest terms //
// 20150826 //

#include <stdio.h>

int main (void)
{
    int i, j;
    int m, n;
    int upper, lower;

    printf("Enter a fraction: ");
    scanf("%d / %d", &i, &j);
    upper = i; lower = j;

    if (i > j){
        int t = i;
        i = j;
        j = t;
    }

    do {
        m = j / i;
        n = j % i;
        j = i;
        i = n;
    } while (n != 0);

    printf("In lowest terms: %d/%d", upper / j, lower / j);

    return 0;
}


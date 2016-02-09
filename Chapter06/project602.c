// Finding Greatest common divisor, Euclid's algorithm //
// 20150826 //

#include <stdio.h>

int main (void)
{
    int i, j;
    int m, n;

    printf("Enter two integers: ");
    scanf("%d %d", &i, &j);

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

    printf("Greatest common divisor: %d\n", j);

    return 0;
}


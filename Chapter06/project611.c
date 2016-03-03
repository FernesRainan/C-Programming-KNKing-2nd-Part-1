// Displaying value of e by computing the value n //

#include <stdio.h>

int main (void)
{
    int n, i, j;
    float factorial, e = 1.0f, number;

    printf("Enter a number n: ");
    scanf("%d", &n);
    printf("1");

    for (i = 1; i <= n; i++){
        for (j = 1, factorial = 1.0f ; j <= i; j++){
            factorial *= j;
        }
        number = 1.0f/factorial;

        printf (" + 1/%.f", factorial);
        
        e += number;
    }

    printf("\nvalue e is %.5f", e);

    return 0;
}


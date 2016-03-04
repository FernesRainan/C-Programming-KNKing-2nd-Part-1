// Displaying value of e by computing the value n //

#include <stdio.h>

int main (void)
{
    int i, j;
    float factorial, e = 1.0f, number, floating;

    printf("Enter a floating point number : ");
    scanf("%f", &floating);
    
    printf("1");

    for (i = 1; e < floating ; i++){
        for (j = 1, factorial = 1.0f ; j <= i; j++){
            factorial *= j;
        }
        number = 1.0f/factorial;

        printf (" + 1/%.f", factorial);
        
        e += number;
    }
    
    printf("\nComparison = %.5f\n", e);
    printf("\nvalue e which is less than your floating point number is %.5f\n", 
            e -= 1.0f/factorial);
    
    return 0;
}


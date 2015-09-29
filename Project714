// Find square root using Newton's method //

#include <stdio.h>
#include <math.h>

int main (void)
{
    double x, y = 1.0L, old_y;
    
    printf("Enter a positive number: ");
    scanf("%lf", &x);
    
    do {
        old_y = y;
        y = (y + (x / y)) / 2.0L;
    } while ( fabs(y - old_y) > .00001L);
    
    printf("Square root: %lf\n", y);

    return 0;
}




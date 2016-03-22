// sums a series of numbers (using double floating point variables) //

#include <stdio.h>

int main (void)
{
    double n, sum = .0;

    printf("This program sums a series of floating points. \n");
    printf("enter floating points (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0.0){
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %lf\n", sum);

    return 0;
}



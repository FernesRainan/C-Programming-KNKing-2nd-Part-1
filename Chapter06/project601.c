// Finding the largest number //
// 2015.08.25//

#include <stdio.h>

int main (void)
{
    float num, largest = .0f;

    do {
        printf("Enter a number: ");
        scanf ("%f", &num);
        largest = largest > num ? largest : num;
    } while (num != 0);

    printf("The largest number entered was %f\n", largest);

    return 0;
}




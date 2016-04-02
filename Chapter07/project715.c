// Write a program that computes the factorial of a positive interger//

#include <stdio.h>

int main (void)
{
    int integer, i, factorial = 1; 

    printf("Enter a positive integer: ");
    scanf("%d", &integer);

    for (i = 1; i <= integer; i++)
        factorial *= i;

    printf("Factorial of %d: %d\n", integer, factorial);

    return 0;
}

        

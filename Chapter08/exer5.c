// Write a program fragment that declares an array named fib_bumers of length 40
// and fills the array with the first 40 Fibonacci numbers
// Hint: Fill in the first two numbers individually, then use a loop to compute the remaining numbers

#include <stdio.h>
#define LENGTH 40

int main (void)
{
    int fib_numbers[LENGTH] = {0,1};
    int i;

    for (i = 2; i < LENGTH; i++) {
        fib_numbers[i] = fib_numbers[i-2] + fib_numbers[i-1];
    }

    printf("\nFirst 40 Fibonacci numbers are: \n");

    for (i = 0; i < LENGTH; i++) {
        if ((i % 10) == 0) printf("\n");
        printf("%10d", fib_numbers[i]);
    }
    printf("\n\n");

    return 0;
}


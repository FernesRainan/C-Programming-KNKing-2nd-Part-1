// Calculate tax by income //

#include <stdio.h>

int main (void)
{
    float income, tax;

    printf("Enter your income amount: ");
    scanf("%f", &income);

    if (income < 750) 
        tax = .01f * income;
    else if (income <= 2250)
        tax = 7.5f + .02f * (income - 750);
    else if (income <= 3750)
        tax = 37.5f + .03f * (income - 2250);
    else if (income <= 5250)
        tax = 82.50f + .04f * (income - 3750);
    else if (income <= 7000)
        tax = 142.50f + .05f * (income - 5250);
    else tax = 230.00f + .06f * (income - 7000);

    printf("Your tax is $%.2f", tax);

    return 0;
}


// Calculating the remaining balance - enhanced //

#define BALANCE(x)  x = (x - payment) + (x * rate)
#include <stdio.h>

int main (void)
{
    float loan, rate, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest of rate: ");
    scanf("%f", &rate);
    
    rate = rate / 12.00f * 0.01f;

    do {
        printf("Enter monthly payment: ");
        scanf("%f", &payment);
        printf("Balance remaining after payment: %.2f\n", BALANCE(loan));
    } while (payment != 0);

    return 0;
}



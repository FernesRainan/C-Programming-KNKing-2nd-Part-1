//Calculates a broker's commission //

#include <stdio.h>

int main (void)
{
    int num_share;
    float price, commission, value, rival;

    printf("Enter a number of share: ");
    scanf("%d", &num_share);
    printf("Enter the price per share: ");
    scanf("%f", &price);

    value = num_share * price;

// current broker commission // 

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else 
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

// rival broker commission //

    if (num_share < 2000)
        rival = 33.00f + .03f * num_share;
    else 
        rival = 33.00f + .02f * num_share;

    printf("Commission: $%.2f\n", commission);
    printf("Rival commission: $%.2f\n", rival);

    return 0;
}


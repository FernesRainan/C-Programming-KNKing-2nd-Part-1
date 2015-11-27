// Calculate wind force //

#include <stdio.h>

int main (void)
{
    int wind_knot;

    printf("Enter a Beaufort scale wind force: ");
    scanf("%d", &wind_knot);

    printf("Wind is ");
    if (wind_knot < 1) printf("Calm\n");
    else if (wind_knot <= 3) printf("Light air\n");
    else if (wind_knot <= 27) printf("Breeze\n");
    else if (wind_knot <= 47) printf("Gale\n");
    else if (wind_knot <= 63) printf("Storm\n");
    else printf("Hurricane\n");

    return 0;
}


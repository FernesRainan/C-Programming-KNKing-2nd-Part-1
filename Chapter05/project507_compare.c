// Comparing four numbers //

#include <stdio.h>

int main (void)
{
    int a, b, c, d, semi_large1, semi_large2, 
        semi_small1, semi_small2, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    semi_large1 = a > b ? a : b;
    semi_small1 = a > b ? b : a;

    semi_large2 = c > d ? c : d;
    semi_small2 = c > d ? d : c;

    largest = semi_large1 > semi_large2 ? semi_large1 : semi_large2;
    smallest = semi_small1 > semi_small2 ? semi_small2 : semi_small1;

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);

    return 0;
}


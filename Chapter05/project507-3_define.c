// Comparing four numbers - Most simplified code //

# define min(a,b) ((a) < (b) ? (a) : (b))
# define max(a,b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int main (void)
{
    int a, b, c, d, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    largest = max (max(a,b), max(c,d));
    smallest = min (min(a,b), min(c,d));

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);

    return 0;
}


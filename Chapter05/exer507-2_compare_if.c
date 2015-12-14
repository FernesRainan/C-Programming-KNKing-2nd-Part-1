// Comparing four numbers - only using four "if" //

#include <stdio.h>

int main (void)
{
    int a, b, c, d, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b){
        int t = a; a = b; b = t;
    }

    if (c > d){
        int t = c; c = d; d = t;
    }

    largest = b > d ? b : d;
    smallest = a < c ? a : c;

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);

    return 0;
}


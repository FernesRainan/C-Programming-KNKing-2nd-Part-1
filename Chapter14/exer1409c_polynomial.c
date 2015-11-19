// Write the following parameterized macros.
// POLYNOMIAL(x) - Computes the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

#include <stdio.h>

#define POLYNOMIAL(x) (3*((x)*(x)*(x)*(x)*(x))) \
                      + (2*((x)*(x)*(x)*(x)))   \
                      - (5*((x)*(x)*(x)))       \
                      - ((x)*(x))               \
                      + (7*(x))                 \
                      - 6
int main (void)
{
	int x;
	
	printf("Enter a integer: ");
	scanf(" %d", &x);
	
	printf("POLYNOMIAL is %d.\n", POLYNOMIAL(x));
	
	return 0;
}

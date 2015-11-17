// Write parameterized macros that compute the follwing values.
// The cube of x. 
// The remainder when n is divided by 4. 
// 1 if the product of x and y is less than 100, 0 otherwise. 

#include <stdio.h>

#define CUBE(x) printf("Cube of %d is %d\n", (x), (x*x*x))
#define REMAINDER_FOUR(y) printf("%d is divided by 4, and the remainder is %d.\n", (y), (y%4))
#define UNDER_100(a, b) printf("%d and %d are under 100? %s.\n", \
                              a, b, ((a) < 100 && (b) < 100) ? "true" : "false")

int main (void)
{
	int i, j, k, l;
	
	printf("Please enter any four integers: ");
	scanf(" %d %d %d %d", &i, &j, &k, &l);
	
	CUBE(i);
	REMAINDER_FOUR(j);
	UNDER_100(k, j);
	
	return 0;
}


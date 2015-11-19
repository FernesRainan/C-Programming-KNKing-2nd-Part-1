// Write the following parameterized macros.
// MEDIAN(x,y,z) - Finds the median of x, y, and z

#include <stdio.h>

#define MAX(x,y)  ((x>y) ?  (x):(y) )
#define MIN(x,y)  ((x<y) ?  (x):(y) )
#define MEDIAN(x,y,z) MIN(MIN(MAX(x,y),MAX(y,z)),MAX(z,x))

int main (void)
{
	int x, y, z;
	
	printf("Enter three integer: ");
	scanf(" %d %d %d", &x, &y, &z);
	
	printf("Median of %d %d %d is %d.\n", x, y, z, MEDIAN(x,y,z));
	
	return 0;
}

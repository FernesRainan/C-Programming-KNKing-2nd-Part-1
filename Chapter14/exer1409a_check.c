// Write the following parameterized macros.
// CHECK(x,y,n) - Has the value 1 if both x and y fall between 0 ad n-1, inclusive. 

#include <stdio.h>

#define CHECK(x,y,n) ((x) >= 0 && (x) <= n-1 && (y) >= 0 && (y) <= n-1)

int main (void)
{
	int x, y, n;
	
	printf("Enter three integer: ");
	scanf(" %d %d %d", &x, &y, &n);
	
	if (CHECK(x,y,n))
		printf("%d and %d are in between 0 to %d.\n", x, y, n-1);
	else 
		printf("%d or %d are not in between 0 to %d.\n", x, y, n-1);
	
	return 0;
}

        

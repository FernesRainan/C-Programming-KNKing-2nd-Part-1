// DISP(sqrt, 3.0);
// should expand into 
// printf("sqrt(%g) = %g\n", 3.0, sqrt(3.0));

// Write a macro DISP2(f,x,y) that's similar to DISP but works for functions with
// two arguments.

#include <stdio.h>

#define DISP2(f, x, y) printf(#f"(%d, %d) = %d\n", (x), (y), f((x), (y)))

int add (int i, int j)
{
	return i + j;
}

int main (void)
{
	DISP2(add, 3, 4);
	DISP2(add, 8, 5);
		
	return 0;
}

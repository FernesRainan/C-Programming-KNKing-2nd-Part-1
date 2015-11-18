// Write a macro DISP(f, x) that expands into a call of printf that displays the value
// of the function f when called with argument x. For example,
// DISP(sqrt, 3.0);
// should expand into 
// printf("sqrt(%g) = %g\n", 3.0, sqrt(3.0));

#include <stdio.h>
#include <math.h>

#define DISP(f, x) printf(#f"(%g) = %g\n", (x), f((x)))

int main (void)
{
	DISP(sqrt, 3.0 * 4.0);
	DISP(sqrt, 4.0 * 4.0);
		
	return 0;
}

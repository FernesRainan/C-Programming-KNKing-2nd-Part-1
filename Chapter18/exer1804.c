#include <stdio.h>

// Let f be the following function. What will be the value of f(10) if f has never been called
// before? What will be the value of f(10) if f has been called five times previously?

int f(int i)
{
	static int j = 0;
	return i * j++;
}

int g(int n)
{
	static int m = 0;
	return n * m++;
}
 
int main (void)
{
	int c;
	printf("Just one called: f(10) value is %d\n", f(10));
	
	for (c = 0; c < 5; c++)
		g(10);
	
	printf("Five times called already: g(10) value is %d\n", g(10));
	
	return 0;
}

		

#include <stdio.h>

// Suppose that u is the following union:
union {
	double a;
	struct {
		char b[4];
		double c;
		int d;
	} e;
	char f[4];
} u;

// If char values occupy one byte, int values occupy four bytes, and double values occupy
// eight bytes, how much space will a C compiler allocate for u?
// (Assume that the compiler leaves no "holes" between members.)

// the size of this example is 16 bytes

int main (void)
{
	printf("The size of the union u is %d.\n", sizeof(u));
	return 0;
}


#include <stdio.h>

#define DEBUG
#include "debug.h"

int main (void)
{
	int i = 1, j = 2, k = 3;
	
#ifdef DEBUG
	printf("Output if DEBUG is define: \n");
#else 
	printf("Output if DEBUG is not define: \n");
#endif

	PRINT_DEBUG(i);
	PRINT_DEBUG(j);
	PRINT_DEBUG(k);
	PRINT_DEBUG(i + j);
	PRINT_DEBUG(2 * i + j - k);
	
	return 0;
}

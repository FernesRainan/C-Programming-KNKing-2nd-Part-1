//Consider the following "mystery" function//

#include <stdio.h>

void pb (int n);

int main (void)
{
	int n;
	
	printf("This is test program.\nPlease enter integer n: ");
	scanf ("%d", &n);
	
	pb(n);
	
	return 0;
}

void pb (int n)
{
	if (n != 0) {
		pb (n / 2);
		putchar ('0' + n%2);
	}
}

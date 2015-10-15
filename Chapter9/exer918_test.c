//Exercise 18. Write a function gcd(m,n)//
//that calculates the greatest common divisor of the intergers//
//Call gcd recursively//

#include "stdio.h"

int gcd (int m, int n);

int main (void)
{
	int m, n;
	
	printf("This program compute GCD.\n");
	printf("Please enter two intergers: ");
	scanf("%d %d", &m, &n);
	
	printf("GCD is %d\n", gcd(m,n));
	
	return 0;
}

	
int gcd (int m, int n)
{
	if (n > m) {
		int t = m;
		m = n;
		n = t;
	}
	
	if (n == 0) return m;
	
	return gcd (n, m % n);
}


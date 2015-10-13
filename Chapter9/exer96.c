//Write a function digit(n, k) that returns the Kth digit (from the right) in n (a positive integer)//
//For example, digit(829,1) returns 9; digit(829, 2) returns 2; digit(829, 3) returns 8 //

#include <stdio.h>

int digit (int n, int k);

int main(void)
{
	int n, k;
	
	printf("Please enter two positive integer: (for example: 829,3) ");
	scanf("%u, %u", &n, &k); 
	
	printf("%u of %uth digit is %d\n", n, k, digit(n,k));
	
	return 0;
}

int digit (int n, int k)
{
	int i;
	
	for (i = 1; i < k; i++) 
		n /= 10;
	return n % 10;
}

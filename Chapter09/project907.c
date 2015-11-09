//The 'power' function of Section 9.6 can be made faster by having it calculate x^n in a different way//
//Write a program that asks the user to enter values for x and n//
//calls 'power' to compute x^n, and then displays the value returned by the function.//

#include <stdio.h>

int power1(int x, int n);
int power2(int x, int n);

int main (void)
{
	int x, n;
	
	printf("Please enter an integer: ");
	scanf("%d", &x);
	printf("How many times would you like to multiply it? : ");
	scanf("%d", &n);
	
	printf("Old way result of power of x is %d.\n", power1(x, n));
	printf("New way result of power of x is %d.\n", power2(x, n));
	
	return 0;
}


int power1 (int x, int n)
{
	if (n == 0) return 1;
	else return x * power1(x, n-1);
}


int power2 (int x, int n)
{
	if (n == 0) return 1;
	else if ((n % 2) == 0) return power2(x, n/2) * power2(x, n/2) ;
	else return x * power2(x, n-1);
}

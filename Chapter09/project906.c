//Write a function that computes the value of the following polynomial//
//3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7*x - 6
//Write a program that asks the user to enter a value for x//

#include <stdio.h>

double poly(double x, int n);

int main (void)
{
	int n;
	double x;
	
	printf("This program computes 3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7*x - 6\n");
	printf("Please enter number x: ");
	scanf("%lf", &x);
	
	printf("The result is %.2lf\n", 3*poly(x,5) + 2*poly(x,4) - 5*poly(x,3) - poly(x,2) + 7*poly(x,1) -6);
	
	return 0;
}

double poly (double x, int n)
{
	if (n == 0)
		return 1;
	else 
		return x * poly (x, n-1);
}

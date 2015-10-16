//Write a function that computes the value of the following polynomial//
//3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7*x - 6
//Write a program that asks the user to enter a value for x//

#include <stdio.h>

double poly(int n, double x);

int main (void)
{
	int n;
	double x;
	
	printf("This program computes 3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7*x - 6\n");
	printf("Please enter number x: ");
	scanf("%lf", &x);
	
	printf("The result is %.2lf\n", 3*poly(5,x) + 2*poly(4,x) - 5*poly(3,x) - poly(2,x) + 7*poly(1,x) -6);
	
	return 0;
}

double poly (int n, double x)
{
	if (n == 0)
		return 1;
	else 
		return x * poly (n-1, x);
}

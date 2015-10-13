//Write a function num_digits(n) that returns the number of digits in n (a positive number)//

#include <stdio.h>

int num_digits(long n);

int main (void)
{
	long n; 
	
	printf("Please enter a positive integer: ");
	scanf("%ld", &n);
	
	printf("\nThe number of digits are %d\n", num_digits(n));
	
	return 0;
}

int num_digits(long n)
{
	int digits = 0;
	
	while (n != 0) {
		digits++;
		n /= 10;
	}
	
	return digits;
}
	

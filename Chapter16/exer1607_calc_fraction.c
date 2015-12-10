// Assume that the fraction structure contains two members:
// numerator and denominator (both of type int)
// Write functions that perform the following operations on fractions:
#include <stdio.h>

struct fraction {
	int numerator, denominator;
};

// (a) Reduce the fraction f to lowest terms. 
// Hint: To reduce a fraction to lowest terms, first compute 
// the greatest common divisor (GCD) of the numerator and denominator. 
// then divide both the numerator and denominator by the GCD

int gcd (int x, int y)
{
	int tmp;
	
	if (x < y) {
		tmp = x;
		x = y;
		y = tmp;
	}
	
	return (y == 0) ? x : gcd(y, (x%y)) ;
}

struct fraction reduce (struct fraction f)
{
	int gcd_value = gcd (f.numerator, f.denominator);
	
	f.numerator /= gcd_value;
	f.denominator /= gcd_value;
	
	return f;
}

// (b) Add the fractions f1 and f2

struct fraction add_fraction (struct fraction f1, struct fraction f2)
{
	struct fraction f;
	
	f.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
	f.denominator = f1.denominator * f2.denominator;
	
	return reduce(f);
}

// (c) Subtract the fraction f2 from the fraction f1

struct fraction subtract_fraction (struct fraction f1, struct fraction f2)
{
	struct fraction f;
	
	f.numerator = (f1.numerator * f2.denominator) - (f2.numerator * f1.denominator);
	f.denominator = f1.denominator * f2.denominator;
	
	return reduce(f);
}

// (d) Multiply the fractions f1 and f2

struct fraction multiply_fraction (struct fraction f1, struct fraction f2)
{
	struct fraction f;
	
	f.numerator = f1.numerator * f2.numerator;
	f.denominator = f1.denominator * f2.denominator;
	
	return reduce(f);
}

// (e) Divide the fraction f1 by the fraction f2;

struct fraction divide_fraction (struct fraction f1, struct fraction f2)
{
	struct fraction f;
	
	f.numerator = f1.numerator * f2.denominator;
	f.denominator = f1.denominator * f2.numerator;
	
	return reduce (f);
}

// simple test main function

int main (void)
{
	struct fraction x, y;
	struct fraction add, subtract, multiply, divide;
			
	printf("Please enter fraction x (a/b): ");
	scanf("%d/%d", &x.numerator, &x.denominator);
	
	printf("Please enter fraction y (a/b): ");
	scanf("%d/%d", &y.numerator, &y.denominator);
	
	add = add_fraction (x, y);
	printf("Two fractions add result is %d/%d\n", add.numerator, add.denominator);
	
	subtract = subtract_fraction (x, y);
	printf("Two fractions subtract result is %d/%d\n", subtract.numerator, subtract.denominator);
	
	multiply = multiply_fraction (x, y);
	printf("Two fractions multiply result is %d/%d\n", multiply.numerator, multiply.denominator);
	
	divide = divide_fraction (x, y);
	printf("Two fractions divide result is %d/%d\n", divide.numerator, divide.denominator);
	
	return 0;
}
 
		
	

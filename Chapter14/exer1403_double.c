// Let DOUBLE be the following macro:
// #define DOUBLE(x) 2*x
// What is the value of DOUBLE(1+2)
// What is the value of 4/DOUBLE(2)
// Fix the definition of DOUBLE

#include <stdio.h>

#define DOUBLE1(x) 2*x
#define DOUBLE2(y) (2*(y))
#define TEST(z) printf(#z " = %d.\n", z)

int main (void)
{
	printf("\nDOUBLE1 is defined DOUBLE1(x) 2*x \n");
	printf("DOUBLE2 is defined DOUBLE2(y) (2*(x)) \n\n");
	
	TEST(DOUBLE1(1+2));
	TEST(DOUBLE2(1+2));
	
	TEST(4/DOUBLE1(2));
	TEST(4/DOUBLE2(2));
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

// True or false: If x is a structure and a is a member of that structure, then
// (&x)->a is the same as x.a. Justify your answer. 

struct x {
	int a;
	struct x *next;
};

int main (void)
{
	struct x test;
	
	test.a = 10;
	
	printf("(&x)->a value is : %d\n", (&test)->a);
	printf("x.a value is : %d\n", test.a);
	
	return 0;
}


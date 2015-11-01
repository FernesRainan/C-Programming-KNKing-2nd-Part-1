// Exercise 12.5
// Suppose that a is a one-dimensional array and p is a pointer variable. 

#include <stdio.h>

void true_false (int );

int main (void)
{
	int a[10];
	int *p;
	
	p = a;
	
      //true_false ( p == a[0]); // Wrong, comparison between pointer and integer //
	true_false ( p == &a[0]);
	true_false ( *p == a[0]);
	true_false ( p[0] == a[0]);
	
	return 0;
}

void true_false (int a)
{
	a ? printf("True\n") : printf("False\n");
	
	return ;
}

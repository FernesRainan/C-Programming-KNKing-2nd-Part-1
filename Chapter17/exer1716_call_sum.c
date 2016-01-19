#include <stdio.h>

// Write the following function. The call sum(g, i, j) should return g(i)+ ... +g(j).
int sum(int (*f)(int), int start, int end);
int g (int value);

int main(void)
{
	int i = 0, j = 5;
	
	int result = sum(g, i, j);
	printf("The result is %d\n", result);         // The result is 30
 
 return 0;
}

int sum (int (*f)(int), int start, int end)
{
	int i, result = 0;
	
	for (i = start; i <= end; i++) {
		result += (*f)(i);
	}
	
	return result;
}

int g (int value)
{
	return value + value;
}
	
	

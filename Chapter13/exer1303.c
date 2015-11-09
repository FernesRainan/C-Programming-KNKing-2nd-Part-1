// Suppose that we call scanf as follows:
// scanf("%d%s%d", &i, s, &j)
// if the user enters 12abc34 56def78, 
// what will be the values of i, s and j after call?

#include <stdio.h>
#include <string.h>

int main (void)
{
	int i, j;
	char s[10];
	
	printf("Enter '12abc34 56def78' and see the result : ");
	scanf("%d%s%d", &i, s, &j); 
	
	printf("i is = %d\n", i);
	printf("s is = %s\n", s);
	printf("j is = %d\n", j);
	
	return 0;
}

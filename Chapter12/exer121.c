//Section 12.1 Suppose that the following declarations are in effect:
//int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
//int *p = &a[1], *q = &a[5];

#include <stdio.h>

int main (void)
{
	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
	int *p = &a[1], *q = &a[5];
	
	printf("int a[] = {5, 15, 34, 54, 14, 2, 52, 72};\n");
	printf("int *p = &a[1], *q = &a[5];\n\n");
		
	printf("*(p+3) = %d\n", *(p+3));
	printf("*(q-3) = %d\n", *(q-3));
	printf("what is the value of q - p? %d \n", q - p);
	printf("p < q is true or false? ");
	if (p < q)
		printf("True\n");
	else 
		printf("False\n");
	
	printf("*p < *q is true or false? ");
	if (*p < *q)
		printf("True\n");
	else 
		printf("False\n");
	
	return 0;
}

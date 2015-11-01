//Exercise #3

#include <stdio.h>
#define N 10

int main (void)
{
	int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p = &a[0], *q = &a[N-1], temp;
	int i;
	while (p < q) {
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}
	
	printf("a[%d] = {", N);
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\b}\n");
		
	return 0;
}

	

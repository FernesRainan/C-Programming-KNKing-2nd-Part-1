// Write the following function:
// int *find_largest (int a[], int n);

#include <stdio.h>

#define N 10

int *find_largest (int a[], int n);

int main (void)
{
	int a[N], i;
	
	printf("We will find the largest number\n");
	printf("Please enter %d numbers: ", N);
	
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	
	printf("The largest number is %d.\n", *find_largest(a, N));
	
	return 0;
}

int *find_largest (int a[], int n)
{
	int i, *largest;
	
	*largest = a[0];
	
	for (i = 1; i < n; i++) 
		if ( a[i] > *largest) 
			*largest = a[i];
	
	return largest;
}

		

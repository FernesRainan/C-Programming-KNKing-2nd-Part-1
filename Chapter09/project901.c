//"selection_sort" must do the following//
//1. Search the array to find the largest delement, then move it to the last position in the array//
//2. Call itself recursively to sort the first n-1 elements of the array//

#include <stdio.h>

#define LENGTH 50

void select_sort (int a[], int n);

int main (void)
{
	int a[LENGTH], n, i;
	
	printf("How many integer do you enter? ");
	scanf("%d", &n);
	printf("Please enter %d integers, then it will be sorted: ", n);
	for (i = 0; i < n; i++)
		scanf(" %d", &a[i]);
	
	select_sort(a, n);
	
	printf("The sorted order is that: \n");
	for (i = 0; i < n; i++)
		printf("%d  ", a[i]);
	printf("\n");
	
	return 0;
	
}

void select_sort (int a[], int n)
{
	int i, index_of_max, max_value;
	
	if (n > 0) {
		max_value = a[0]; index_of_max = 0;
		
		for (i = 1; i < n; i++){
			if (a[i] > max_value){
				max_value = a[i];
				index_of_max = i;
			}
		}
		
		for (i = index_of_max + 1; i < n; i++){
			a[i-1] = a[i];
		}
		a[n-1] = max_value;
		
		select_sort (a, n - 1);
	}
}

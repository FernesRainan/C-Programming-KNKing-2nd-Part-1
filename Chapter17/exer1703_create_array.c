#include <stdio.h>
#include <stdlib.h>

// Write the following function:
int *create_array(int n, int initial_value);
// The function should return a pointer to a dynamically allocated int array with n members,
// each of which is initialized to initial_value. The return value should be NULL if the
// array can't be allocated. 

int main(void)
{
	int i, qty, value;
	int *result;
	
	printf("How many array members do you want? : ");
	scanf("%d", &qty);
	printf("What is initialize_value? : ");
	scanf("%d", &value);
	
	result = create_array(qty, value);
	if (result == NULL) return 0;
	
	for(i = 0; i < qty; i++) {
		if ((i % 10) == 0) printf("\n");
		printf(" %d", result[i]);
	}
	putchar('\n');
		
	return 0;
	
}

int *create_array(int n, int initial_value)
{
	int *ptr;
	int i;
	
	ptr = malloc(n * sizeof(int));
	
	if (ptr == NULL) {
		printf("-- No space left --\n");
		return (void *) NULL;
	}
	
	for (i = 0; i < n; i++)
		ptr[i] = initial_value;
	
	return ptr;
}

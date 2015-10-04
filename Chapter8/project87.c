//Write a program that reads a 5 x 5 array of integers 
//and then prints the N sums and the N sums:

#include <stdio.h>

#define N 5

int main (void)
{
	int i,j;
	int array[N][N];
	int sum;
	
	for (i = 0; i < N; i++){
		printf("Enter row %d : ", i + 1);
		for (j = 0; j < N; j++)
			scanf("%d", &array[i][j]);
	}
	
	printf("\nRow totals: ");
	for (i = 0; i < N; i++){
		sum = 0;
		for (j = 0; j < N; j++)
			sum += array[i][j];
		printf(" %d", sum);
	}
	
	printf("\nColumn totals: ");
	for (j = 0; j < N; j++){
		sum = 0;
		for (i = 0; i < N; i++)
			sum += array[i][j];
		printf(" %d", sum);
	}
	printf("\n");
	
	return 0;
}

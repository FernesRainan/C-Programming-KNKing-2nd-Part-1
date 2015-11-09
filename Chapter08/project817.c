//Write a program that prints an N x N magic square
//
//This program creates a magic square of a specified size.
//The size must be an odd number between 1 and 99
//Enter size of magic square: 5
//   17   24    1    8   15
//   23    5    7   14   16
//    4    6   13   20   22
//   10   12   19   21    3
//   11   18   25    2    9


#include <stdio.h>

int main(void)
{
	int n, size, i, new_row, new_col;
	int row, col;
	
	printf("Theis program creates a magic square of a specified size.\n");
	printf("The sizee must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);
	
	if ((n % 2 == 0) || n < 1 || n > 99){
		printf("Sorry. Please enter ODD number between 1 and 99.\n\n");
		return 1;
	}
	
	int square[n][n];
	
	for (row = 0; row < n; row++)
		for (col = 0; col < n; col++)
			square[row][col] = 0;						// Fill up zero in square array N x N //
			
	row = 0; col = n / 2;		// '1' posisition is first row and middle of column //
	//printf("%5d%5d\n", row, col);//
	
	size = n * n;
	//printf("size = %d", size);//
	
	for ( i = 1; i <= size; i++){
		square [row][col] = i;
		new_row = row; new_col = col;
		
		if (new_row == 0) new_row = n;
		new_row--;
		if (new_col == (n - 1)) new_col = -1;
		new_col++;
		
		if (square[new_row][new_col] == 0){
			row = new_row;
			col = new_col;
		}
		else {
			if (row == (n - 1))	row = -1;
			row++;
		}
	}
		
	for (row = 0; row < n; row++){
		for (col = 0; col < n; col++)
			printf("%5d", square[row][col]);
		printf("\n");
	}
	
	return 0;
}

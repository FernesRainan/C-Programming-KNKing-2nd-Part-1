//It prompts for five quiz grades for each of five students, 
//then computes the total score and average score for each student, 
//and the average score, high score, and low score for each quiz.

#include <stdio.h>

#define N 5

int main (void)
{
	int i,j;
	int array[N][N];
	int sum, tscore, hscore, lscore;
	
	for (i = 0; i < N; i++){
		printf("Enter student%d score: ", i + 1);
		for (j = 0; j < N; j++)
			scanf("%d", &array[i][j]);
	}
	
	printf("\nEach student's total score/average score: ");
	for (i = 0; i < N; i++){
		sum = 0;
		for (j = 0; j < N; j++)
			sum += array[i][j];
		printf(" %d/%.2f", sum, ((float) sum / (float) N));
	}
	
	printf("\n\nEach Quiz average score/High score/Low score: ");
	for (j = 0; j < N; j++){
		tscore = 0;
		hscore = 0;
		lscore = 100;
		for (i = 0; i < N; i++){
			tscore += array[i][j];
			if (array[i][j] > hscore) hscore = array[i][j];
			if (array[i][j] < lscore) lscore = array[i][j];	
		}
		printf(" %.2f/%d/%d ", ((float) tscore / (float) N), hscore, lscore);
	}
	
	printf("\n");
	
	return 0;
}

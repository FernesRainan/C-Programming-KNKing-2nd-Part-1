// Exercise 1215.c
// Write a loop that prints all temperature readings stored in row i of the temperatures array.
// Use a pointer to visit each element of the row. 

int *p;

for (p = temperatures[i]; p < temperatures[i] + 24; p++)
	printf("%d ", *p);


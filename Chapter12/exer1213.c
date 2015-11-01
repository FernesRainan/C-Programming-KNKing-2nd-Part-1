// Exercise 1213.c
// Section 8.2 had a program fragment in which two nested for loops initialized
// the array 'ident' for use as an identity matirx.
// Rewrite this code.

#define N 10

double ident[N][N], *p;
int num_zeros = N;

for (p = &ident[0][0]; p <= &ident[N-1][N-1]; p++)
	if (num_zeros == N){
		*p = 1.0;
		num_zeros = 0;
	}
	else {
		*p = 0.0;
		num_zeros++;
	}


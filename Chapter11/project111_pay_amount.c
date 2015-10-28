// Modify Programming Project 7 from Chapter 2
// void pay_amount (int dollars, int *twenties, int *tens,
//                  int *fives, int ones);

#include <stdio.h>

void pay_amount (int dollars, int *, int *, int *, int *);

int main (void)
{
	int dollars;
	int twenties, tens, fives, ones;

	printf ("Enter a dollar amount : ");
	scanf ("%d", &dollars);

	pay_amount (dollars, &twenties, &tens, &fives, &ones);
		
	printf ("$20 bills : %d\n", twenties);
	printf ("$10 bills : %d\n", tens); 
	printf ("$5 bills : %d\n", fives);
	printf ("$1 bills : %d\n", ones);

	return 0;
}

void pay_amount (int dollars, int *twenties, int *tens, 
                 int *fives, int *ones)
{
	*twenties = dollars / 20;
	*tens = (dollars - *twenties * 20) / 10;
	*fives = (dollars - *twenties * 20 - *tens * 10) / 5;
	*ones = (dollars - *twenties * 20 - *tens * 10 - *fives * 5) ;
	
	return ;
}

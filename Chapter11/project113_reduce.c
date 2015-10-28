// Modify Programming Project 3 from Chapter 6 
// void reduce (int numerator, int denominator
//              int *reduced_numerator, int *reduced_denominator);

#include <stdio.h>

void reduce (int numerator, int denominator,
             int *reduced_numerator, 
             int *reduced_denominator);
             
int main (void)
{
    int numerator, denominator;
    int reduced_numerator, reduced_denominator;
        
    printf("Enter a fraction (e.g. 12 / 36) : ");
    scanf("%d / %d", &numerator, &denominator);
    
    reduce (numerator, denominator, &reduced_numerator, &reduced_denominator);    

    printf("In lowest terms: %d/%d", reduced_numerator, reduced_denominator);

    return 0;
}

void reduce (int numerator, int denominator, 
             int *reduced_numerator, int *reduced_denominator)
{
	int temp, remains, gcd;
	int upper = numerator;
	int lower = denominator;
	
  if (upper > lower){
        temp = upper;
        upper = lower;
        lower = temp;
  }

	do {
	    remains = lower % upper;
	    lower = upper;
	    upper = remains;
	} while (remains != 0);
	gcd = lower;
	
	*reduced_numerator = numerator / gcd ; 
	*reduced_denominator = denominator / gcd;
	
	return ;
}

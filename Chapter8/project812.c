//Modify Programming Project 5 from Chapter 7
//so that the SCRABBLE values of the letter are stored in an array. 
//The array will have 26 elements, corresponding to the 26 letters of the alphabet. 

#include <stdio.h>
#include <ctype.h>

int main (void)
{
	int sum = 0;
	char ch;
	int scrabble_weights[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	
	printf("Enter a word: ");
	
	while ((ch =  getchar()) != '\n') {
		sum += scrabble_weights[toupper(ch) - 'A'];
	}
	
	printf("Scrabble Value: %d\n", sum);
	
	return 0;
}

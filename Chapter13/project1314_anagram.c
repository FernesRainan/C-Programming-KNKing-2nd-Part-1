// Write a program that tests whether two words are anagrams, permutations of the same letters
// First loop increases elements in array. Second loop decreases elements in array
// Third loop checks elements in array all zero. All zero then, it is anagram. 

// Modify Programming Project 16 from Chapter 8 so that it includes the following function:
// bool are_anagrams (const char *word1, const char *word2);
// The function returns true if the strings pointed to by word1 and word2 are anagrams. 

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

#define LENGTH 26

bool are_anagrams (const char *word1, const char *word2);

int error (void)
{
	printf("\nThere is non alphabet character. \
	        \nPlease enter proper alphabet. \
	        \nThe program terminates.\n");
	exit(0);
}		
		
int main (void)
{
	char word1[LENGTH], word2[LENGTH] ;
		
	printf("Enter first word: ");
	gets(word1);
	
	printf("Enter second word: ");
	gets(word2);
	
	are_anagrams (word1, word2) ? printf("The words are anagrams.\n") : printf("The words are not anagrams.\n");
	
	return 0;
}

bool are_anagrams (const char *word1, const char *word2)
{
	char ch;
	int test[LENGTH] = {0};
	int i;
	
	for (i = 0; i < LENGTH; i++){
		if (isalpha(word1[i])){
			ch = word1[i];
			test[tolower(ch) - 'a']++;
		}
		else if (word1[i] == '\0')
			break;
		else 
			error();
	}
			
	for (i = 0; i < LENGTH; i++){
		if (isalpha(word2[i])){
			ch = word2[i];
			test[tolower(ch) - 'a']--;
		}
		else if (word2[i] == '\0')
			break;
		else 
			error();
	}
		
	for (int i = 0; i < LENGTH; i++){
		if ( test[i] != 0 )
			return false;
		else if (i == LENGTH - 1)
			return true;
	}
}	

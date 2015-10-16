//Write a program that tests whether two words are anagrams, permutations of the same letters
//Modify programming Project 16 from Chapter 8
//void read_word (int counts[26]);
//bool equal_array (int counts1[26], int counts[26]);


#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LENGTH 26

void read_word(int counts[]);
bool equal_array(int counts1[], int counts2[]);

int main (void)
{
	char ch;
	int counts1[LENGTH] = {0}, counts2[LENGTH] = {0};
		
	printf("Enter first word: ");
	read_word(counts1);
		
	printf("Enter second word: ");
	read_word(counts2); 
	
	printf("The words are ");
	
	if (equal_array (counts1, counts2))
		printf("anagram.\n");
	else
		printf("not anagram.\n");
	
	return 0;
}

void read_word(int counts[])
{
	char ch;
	
	while ((ch = getchar()) != '\n'){
		if (isalpha(ch)){
			ch = tolower(ch);
			counts[ch - 'a']++;
		}
		else {
			printf("There is non alphabet character.\nPlease enter proper alphabet.\nThe program terminates.\n");
		}
	}	
}

bool equal_array (int counts1[], int counts2[])
{
	int i;
	
	for (i = 0; i < LENGTH; i++)
		if ((counts1[i] - counts2[i])!= 0)
			return false;

	return true;
}

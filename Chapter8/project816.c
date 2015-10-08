//Write a program that tests whether two words are anagrams, permutations of the same letters
//First loop increases elements in array
//Second loop decreases elements in array
//Third loop checks elements in array all zero. 
//All zero then, it is anagram. 

#include <stdio.h>
#include <ctype.h>

#define LENGTH 26

int main (void)
{
	char ch;
	int i, word[LENGTH] = {0};
		
	printf("Enter first word: ");
	
	while ((ch = getchar()) != '\n'){
		if (isalpha(ch)){
			ch = tolower(ch);
			word[ch - 'a']++;
		}
		else {
			printf("There is non alphabet character.\nPlease enter proper alphabet.\nThe program terminates.\n");
			return 0;
		}
	}
	
	printf("Enter second word: ");
	
	while ((ch = getchar()) != '\n'){
		if (isalpha(ch)){
			ch = tolower(ch);
			word[ch - 'a']--;
		}
		else {
			printf("There is non alphabet character.\nPlease enter proper alphabet.\nThe program terminates.\n");
			return 0;
		}
	}
	
	printf("The words are ");
	
	for (i = 0; i < LENGTH; i++){
		if ( word[i] != 0 ){
			printf("not anagrams.\n");
			break;
		}
		else if ( i == (LENGTH - 1) ) printf("anagrams.\n");
	}
	
	return 0;
}

			
		

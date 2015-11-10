// Display the average word length to one decimal place.

// Modify Programming Project 13 from Chapter 7 so that it includes the following function:
// double compute_average_word_length (const char *sentence);
// The function returns the average length of the words in the string pointed to by sentence. 

#include <stdio.h>

#define LAST_WORD 1 //Last word is not calculated in switch//
#define STR_LENG 101

double compute_average_word_length (const char *sentence);
int read_line (char str[], int n);

int main (void)
{
	char sentence[STR_LENG];
	
	printf("\nEnter a snetence: ");
	read_line (sentence, STR_LENG);
	
	printf("Average word length: %.1f\n", compute_average_word_length (sentence));
	
	return 0;
}

int read_line (char str[], int n)
{
	int ch, i;
	
	for (i = 0; i < n; i++) {
		ch = getchar();
		if (ch == '\n') break;
		str[i] = ch;
	}
	str[i] = '\0';
	
	return i;
}

double compute_average_word_length (const char *sentence)
{	
	int characters = 0, words = LAST_WORD;
	
	while (*sentence){
	    switch (*sentence){
	        case ' ':
	            words++;
	            break;
	        default:
	            characters++;
	            break;
	    }
	    sentence++;
	}
	
	printf("\nCharacters = %d\n", characters);
	printf("Words = %d\n", words);
	
	return (double) characters / (double) words; 
}

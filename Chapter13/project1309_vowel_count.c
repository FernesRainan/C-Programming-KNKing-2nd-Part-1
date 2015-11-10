// Counting the number of vowels
// Modify Programming Project 10 from Chapter 7 so that it includes the following functions:
// int compute_vowel_count (const char *sentence);
// The function returns the number of vowels in the string pointed to by the sentence parameter.

#include <stdio.h>
#include <ctype.h>

#define STR_LEN 61

int compute_vowel_count (const char *sentence);
int read_line (char str[], int n);

int main (void)
{    
	char sentence[STR_LEN];
	
	printf("\nEnter a sentence: ");
	read_line (sentence, STR_LEN);
	
	printf("Your sentence contains %d vowels.\n\n", compute_vowel_count(sentence));
	
	return 0;
}

int read_line (char str[], int n)
{
	int ch, i;
	
	for (i = 0; i < n; i++) {
		ch = getchar();
		if (ch == '\n')
			break;
		str[i] = ch;
	}
	str[i] = '\0';
	
	return i;
}
	
int compute_vowel_count (const char *sentence)
{
	int count = 0;
	char ch;

	while (*sentence){
	    ch = *sentence++;
	    	
	    switch (toupper(ch)) {
	        case 'A': case 'E': case 'I': case 'O': case 'U':
	            count++ ;
	    }
	}
	
	return count;
}


                


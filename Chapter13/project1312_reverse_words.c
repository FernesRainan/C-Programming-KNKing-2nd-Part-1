// Write a program that reverses the words in a sentence:
// Enter a sentence: you can cage a swallow can't you?
// Reversal of sentence: you can't swallow a cage can you?

// Modify Programming Project 14 from Chapter 8 so that it stores the words
// in a two-dimensional char array as it reads the sentence, with each row of the array
// storing a single word. Assume that the sentence comtains no more than 30 words and no word is
// more than 20 characters long. Be sure to store a null character at the end of each word
// so that it can be treated as a string. 

#include <stdio.h>

#define WORDS 30
#define W_LEN 21
#define LAST_WORD 1

int read_line (char str[], int n)
{
	int ch, i ;
	
	for (i = 0; i < n; i++)
	{
		ch = getchar();
		if (ch == '\n')
			break;
		str[i] = ch;
	}
	str[i] = '\0';
	
	return i;
}

int main (void)
{
	char *p, terminating, sentence[WORDS][W_LEN] = {0}, text[WORDS * W_LEN] = {0}; // Must initialize it. 
	int i, j, words_count = LAST_WORD;
					
	printf("Enter a sentence: ");
	read_line (text, WORDS * W_LEN);
	
	p = &text[0];
	while (*p != '\0')
		if (*p++ == ' ') words_count++ ;      // How many words in a sentence? //
	printf("Words count = %d\n", words_count);
	
	if (words_count > 30) {
		printf("Too many words!!\nProgram aborted..\n");
		return 1;
	}
	
	if ( *(--p) == '?' || *(--p) == '!' || *(--p) == '.') {
		terminating = *p;
		*p = ' ';       // In below loop, ' ' will change to '\0'.
	}
	printf("text = %s\n", text);                  // Checking text array contents.
	printf("Terminating = %c\n", terminating);    // Checking terminating character.
	 
	p = text; 
	for (i = 0; i < words_count; i++) 
		for (j = 0; j < W_LEN; j++){ 
			if (*p == ' ') {    // After blank, new word starts. And new word is stored to new row. 
				*p = '\0';
				p++;              // Pointing next word's starting point. 
				break;
			}
			sentence[i][j] = *p++;
		}
	
	putchar('\n');
	for (i = words_count - 1 ; i >= 0 ; i--)
		printf(" %s", sentence[i]);
	printf("%c\n", terminating);
	
	return 0;
}

			

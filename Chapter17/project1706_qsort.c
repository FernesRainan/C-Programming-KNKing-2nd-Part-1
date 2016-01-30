// Modify Programming Project 5 so that is uses qsort to sort the array of pointers.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 50  // maximum number of WORDS
#define WORD_LEN 20   // max length of word

int read_line (char str[], int n);
int compare_word (const void *, const void *);

int main (void)
{
	char *reminders[MAX_WORDS];
	char msg_str[WORD_LEN+1];
	int i, j, word_num = 0;
	
	for (i = 0; ;i++) 
	{
		if (word_num == MAX_WORDS){
			printf("-- No space left --\n");
			break;
		}
		
		printf("Enter word: ");
		
		if (!(read_line(msg_str, WORD_LEN))) 
			break;
			                                                   
		reminders[i] = malloc(strlen(msg_str) + 1);    
		if (reminders[i] == NULL){                        
			printf("-- No space left --\n");                 
			break;                                           
		}                                                  
		strcpy(reminders[i], msg_str);
		word_num++;
	}
	
	qsort(reminders, word_num, sizeof(char *), compare_word);
	
	printf("\nIn sorted order: ");
	for ( i = 0; i < word_num; i++)
		printf(" %s", reminders[i]);
	
	putchar('\n');
		
	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

int compare_word (const void *p, const void *q)
{
	char **string_p = (char **)p;
	char **string_q = (char **)q;
	
	return strcmp(*string_p, *string_q);
}


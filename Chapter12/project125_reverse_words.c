// Write a program that reverses the words in a sentence:
// Enter a sentence: you can cage a swallow can't you?
// Reversal of sentence: you can't swallow a cage can you?
// 
// Modify programming Project 14 from Chapter 8 so that it uses a pointer
// instead of an integer to keep track of the current position
// in the array that contains the sentence. 


#include <stdio.h>

#define LENGTH 100

int main (void)
{
	char ch, terminating, sentence[LENGTH] = {0};
	char *p;
		
	printf("Enter a sentence: ");
	
	for ( p = sentence; (ch = getchar()) != '\n'; p++)
		*p = ch;
		
	*p = '\0';
	
	ch = *(--p);
	if ( ch == '.' || ch == '?' || ch == '!') {
		terminating = ch;
		*p = '\0';
	}
	printf("Reversal of sentence: ");
		
	while ( p >= sentence ){
		
		while (*(p--) != ' ' && p != sentence); // searching begin of word//
		
		if (p != sentence) *(++p) = '\0'; //Evading side effect of 'p--'//
			
		if ( p != sentence ){
			while (*(++p) != '\0'){
				putchar(*p);
				*p = '\0';
			}
			putchar(' ');
		}
		else {
			while ( *p != '\0'){
				putchar(*p);
				*(p++) = '\0';
			}
			break;
		}
	}
	
	printf("%c\n", terminating);
	
	return 0;
}

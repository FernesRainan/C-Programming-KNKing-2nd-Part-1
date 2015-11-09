//Write a program that reverses the words in a sentence:
//Enter a sentence: you can cage a swallow can't you?
//Reversal of sentence: you can't swallow a cage can you?

#include <stdio.h>

#define LENGTH 100

int main (void)
{
	char ch, terminating, sentence[LENGTH] = {0};
	int count;
		
	printf("Enter a sentence: ");
	
	for ( count = 0; (ch = getchar()) != '\n'; count++)
		sentence[count] = ch;
		
	sentence[count] = '\0';
	
	ch = sentence[--count];
	if ( ch == '.' || ch == '?' || ch == '!') {
		terminating = ch;
		sentence[count] = '\0';
	}
	printf("Reversal of sentence: ");
		
	while ( count >= 0 ){
		
		while (sentence[count--] != ' ' && count != 0); // searching begin of word//
		
		if (count != 0) sentence[++count] = '\0'; //Evading side effect of 'count--'//
			
		if ( count != 0){
			while (sentence[++count] != '\0'){
				putchar(sentence[count]);
				sentence[count] = '\0';
			}
			putchar(' ');
		}
		else {
			while (sentence[count] != '\0'){
				putchar(sentence[count]);
				sentence[count++] = '\0';
			}
			break;
		}
	}
	
	printf("%c\n", terminating);
	
	return 0;
}

		
		
			
	
			
		
	

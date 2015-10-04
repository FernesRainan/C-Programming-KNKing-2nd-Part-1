//Write a "B1FF filter" that reads a message entered by the user
//and translates it into B1FF-speak:
//Enter message: Hey dude, C is rilly cool
//In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

#include <stdio.h>
#include <ctype.h>

#define N ((int)(sizeof(character)/sizeof(character[0])))
#define MAX_MSG_LENG 50

int main (void)
{
	char character[MAX_MSG_LENG];
	int i, n;
	
	printf("Enter message: ");
	
	for (n = 0; n < N; n++){
		if ((character[n] = getchar()) == '\n') break;
		character[n] = toupper(character[n]);
	}
		
	printf("In B1FF-speak: ");
	
	for (i = 0; i < n; i++){
		switch (character[i]) {
			case 'A': putchar('4'); break;
			case 'B': putchar('8'); break;
			case 'E': putchar('3'); break;
			case 'I': putchar('1'); break;
			case 'O': putchar('0'); break;
			case 'S': putchar('5'); break;
			default: putchar(character[i]);
		}
	}
	
	printf("!!!!!!!!!!\n\n");
	
	return 0;
}

// Write a program that reads a message, then prints the reversal of the message:
// Enter a message: Don't get mad, get even.
// Reversal is: .neve teg ,dam teg t'noD

#include <stdio.h>

#define MSG_LEN 80

int main (void)
{
	char msg[MSG_LEN];
	int i;
	
	printf("Enter a message: ");
	for (i = 0; i < MSG_LEN; i++) {
		msg[i] = getchar();
		if (msg[i] == '\n')
			break;
	}
	
	printf("reversal is: ");
	for (i--; i >= 0; i--)
		putchar(msg[i]);
	putchar('\n');
	
	return 0;
}

	

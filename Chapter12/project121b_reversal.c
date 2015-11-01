// Write a program that reads a message, then prints the reversal of the message:
// Enter a message: Don't get mad, get even.
// Reversal is: .neve teg ,dam teg t'noD
// Rewrite a program using pointer

#include <stdio.h>

#define MSG_LEN 80

int main (void)
{
	char msg[MSG_LEN], *p;
	
	printf("Enter a message: ");
	for (p = &msg[0]; p < &msg[MSG_LEN]; p++){
		*p = getchar();
		if (*p == '\n')
			break;
	}
	
	printf("Reversal is: ");
	for (p--; p >= msg; p--)
		putchar(*p);
	putchar('\n');
	
	return 0;
	
}


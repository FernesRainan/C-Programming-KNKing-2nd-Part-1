// Write a program that reads a message, then prints the reversal of the message:
// Enter a message: Don't get mad, get even.
// Reversal is: .neve teg ,dam teg t'noD

// Modify Programming Project 1 from Chapter 12 so that it includes the following function:
// void reverse (char *message);
// The function reverses the string pointed to by message. 
// Hint: Use two pointers

#include <stdio.h>
#include <string.h>

#define MSG_LEN 80

void reverse (char *message);

int main (void)
{
	char msg[MSG_LEN] = {0};
	
	printf("Enter a message: ");
	gets(msg);
	reverse (msg);
	
	return 0;
}

void reverse (char *message)
{
	char *p, *q, temp;
	
	p = message;
	q = message + strlen(message) - 1;       // pointing last location of character. 
	
	while (p < q) {
		temp = *p; 
		*p++ = *q; 
		*q-- = temp; 
	}
	
	printf("%s\n", message);
	
	return;
}

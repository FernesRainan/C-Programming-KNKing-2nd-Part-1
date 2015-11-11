// Write a program that reads a message, then checks whether it's palindrome
// (the letters in the message are the same from left to right as from right to left)
// Enter a message: He lived as a devil, eh?
// Palindrome
// Enter a message: Madam, I am Adam. 
// Not a palindrome

// Modify Programming Project 2 from Chapter 12 so that it includes the following function:
// bool is_palindrome (const char *message);
// The function returns true if the string pointed to by message is a palindrome.

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MSG_LENG 80

void result (bool );
void read_msg (char [], int );
bool is_palindrome (const char *message);

int msg_length = 0;

int main (void)
{
	char msg[MSG_LENG];
	
	printf("Enter a message: ");
	read_msg (msg, MSG_LENG);
	result (is_palindrome (msg));
	
	return 0;
}

void result (bool answer)
{
	answer ? printf("Palindrome.\n") : printf("Not a palindrome.\n");
	return ;
}

void read_msg (char msg[], int array_limit)
{
	char *p; 
				
	for ( p = msg; p < &msg[array_limit] ;) {
		*p = getchar();
		if (isalpha(*p)){
			p++;
			msg_length++;
		}
		if (*p == '\n') break;
	}
	
	return ;
}

bool is_palindrome (const char *message)
{
	int i, j;
	char inc, dec;
	
	for (i = 0, j = msg_length - 1; i <= j ; i++, j--){
		inc = message[i]; dec = message[j];
		if (toupper(inc) != toupper(dec)) return false;
	}
	
	return true;
}

	
	
		


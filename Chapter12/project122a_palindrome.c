// Write a program that reads a message, then checks whether it's palindrome
// (the letters in the message are the same from left to right as from right to left)
// Enter a message: He lived as a devil, eh?
// Palindrome
// Enter a message: Madam, I am Adam. 
// Not a palindrome

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MSG_LENG 80

void result (bool );
void read_msg (char [], int );
bool analyze (char []);

int msg_length = 0;

int main (void)
{
	char msg[MSG_LENG];
	
	printf("Enter a message: ");
	read_msg (msg, MSG_LENG);
	result (analyze (msg));
	
	return 0;
}

void result (bool answer)
{
	answer ? printf("Palindrome.\n") : printf("Not a palindrome.\n");
	return ;
}

void read_msg (char msg[], int array_limit)
{
	char ch; 
				
	for ( int i = 0; i < array_limit;) {
		ch = getchar();
		if (isalpha(ch)){
			msg[i] = ch;
			i++;
			msg_length++;
		}
		if (ch == '\n') break;
	}
	
	return ;
}

bool analyze (char msg[])
{
	int i, j;
	bool answer = true;
	
	for (i = 0, j = msg_length - 1; i < (msg_length) / 2; i++, j--)
		if (toupper(msg[i]) != toupper(msg[j])) answer = false;
	
	return answer;
}

	
	
		


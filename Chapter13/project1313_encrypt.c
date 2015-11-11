// Write Caesar cipher. It involves replacing each letter in a message with another letter
// that is a fixed number of positions later inthe alphabet. 
// "wraps around" to the beginning of the alphabet.
// 
// Enter message to be encrypted: Go ahead, make my day.
// Enter shift amount (1-25): 3
// Encrypted message: Jr dkhdg, pdnh pb gdb.
   
// Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
// Enter shift amount (1-25): 23
// Encypted message: Go ahead, make my day. 

// Modify Programming Project from Chapter 8 so that it includes the following function:
// void encrypt (char *message, int shift);
// The function expects message to point to a string containing the message to be encrypted;
// shift represents the amount by which each letter in the message is to be shifted. 

#include <stdio.h>

#define STR_LEN (80 + 1) 

void encrypt (char *message, int shift);

int main (void)
{
	char message[STR_LEN];
	char ch;
	int i, shift_amount;
	
	printf("Enter message to be encrypted: ");
	
	for (i = 0; (ch = getchar()) != '\n'; i++)	message[i] = ch;
	message[i] = '\0';
		
	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift_amount);
	
	encrypt (message, shift_amount);
	
	return 0;
}

void encrypt (char message[], int shift_amount)
{
	printf("Encypted message: ");
	
	for ( ; *message != '\0' ; ){
		if (*message >= 'a' && *message <= 'z') *message = ((*message - 'a') + shift_amount) % 26 + 'a';
		if (*message >= 'A' && *message <= 'Z') *message = ((*message - 'A') + shift_amount) % 26 + 'A';
		
		putchar(*message++);
	}
	putchar('\n');
	
	return ;	
}

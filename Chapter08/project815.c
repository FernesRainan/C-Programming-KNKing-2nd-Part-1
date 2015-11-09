//Write Caesar cipher. It involves replacing each letter in a message with another letter
//that is a fixed number of positions later inthe alphabet. 
//"wraps around" to the beginning of the alphabet.
//
//Enter message to be encrypted: Go ahead, make my day.
//Enter shift amount (1-25): 3
//Encrypted message: Jr dkhdg, pdnh pb gdb.

//Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
//Enter shift amount (1-25): 23
//Encypted message: Go ahead, make my day. 

#include <stdio.h>
#include <ctype.h>

int main (void)
{
	char message[80];
	char ch;
	int i, length, shift_amount;
	
	printf("Enter message to be encrypted: ");
	
	for (i = 0; (ch = getchar()) != '\n'; i++)	message[i] = ch;
	
	length = i;
	
	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift_amount);
	
	printf("Encypted message: ");
	
	for (i = 0; i < length ; i++){
		ch = message[i];
		if (ch >= 'a' && ch <= 'z') ch = ((ch - 'a') + shift_amount) % 26 + 'a';
		if (ch >= 'A' && ch <= 'Z') ch = ((ch - 'A') + shift_amount) % 26 + 'A';
		
		putchar(ch);
	}
	putchar('\n');
	
	return 0;
	
}

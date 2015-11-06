// Write a function named 'capitalize' that capitalizes all letters in its argument. 
// The argument will be a null-terminated string containing arbitrary characters, not just letters.
// Use array subscripting to access the characters in the string. 
// Hint: Use the toupper function to convert each character to upper-case. 

#include <stdio.h>
#include <string.h>

#define STR_LEN 100

void capitalize (char str[]);

int main (void)
{
	char str[STR_LEN] = "what is wrong with you, lucille?";
	
	printf("before: %s\n", str);
	capitalize(str);
	printf("AFTER: %s\n", str);
	
	return 0;
}

void capitalize (char str[])
{
	int i;
	
	while(str[i] = toupper (str[i++]));
	
	return;
}

	
	

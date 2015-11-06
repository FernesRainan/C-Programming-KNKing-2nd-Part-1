// Write a function named 'capitalize' that capitalizes all letters in its argument. 
// The argument will be a null-terminated string containing arbitrary characters, not just letters.
// Rewrite the capitalize function, this time using pointer arithmetic to access the characters in the string. 
// Hint: Use the toupper function to convert each character to upper-case. 

#include <stdio.h>
#include <string.h>

// #define STR_LEN 100

void capitalize (char *);

int main (void)
{
	char str[] = "what is wrong with you, lucille?";
	
	printf("before: %s\n", str);
	capitalize(str);
	printf("AFTER: %s\n", str);
	
	return 0;
}

void capitalize (char *str)
{
	while(*str = toupper (*str++));
	
	return;
}

	
	

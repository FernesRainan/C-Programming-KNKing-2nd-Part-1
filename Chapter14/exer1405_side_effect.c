// Let's be a string and let i be an int variable. 
// Show the output produced by each of the following program fragments
// WATCH THE SIDE EFFECT!!

#include <stdio.h>
#include <string.h>

#define MAX_LENG 10
#define TOUPPER1(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))
	
int main (void)
{
	int i = 0;
	char s[MAX_LENG] = {0};
		
	strcpy(s, "abcd");
	putchar(TOUPPER1(s[++i]));
	putchar('\n');
	
	strcpy(s, "0123");
	i = 0;
	putchar(TOUPPER1(s[++i]));
	
	return 0;
}

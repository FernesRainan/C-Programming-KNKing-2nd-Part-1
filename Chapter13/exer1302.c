// Which of the following function calls are legal? 
// Show the output produced by each legal call
// and explain why the others are illegal. 

#include <stdio.h>
#include <string.h>

int main (void)
{
	char *p = "abc";
	
	putchar(p);  // output is '0'
	putchar(*p); // output is 'a'
	puts(p);     // output is 'abc'
	puts(*p);    // output is none.
	
	return 0;
}


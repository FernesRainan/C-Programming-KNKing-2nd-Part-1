// Suppose we want a macro that expands into a string containing the current line number and file name. 
// In other words, we'd like to write
// const char *str = LINE_FILE;
// and have it expand into
// const char *str = "line 10 of file foo.c";

#include <stdio.h>

#define SSTR(s) STR(s)
#define STR(s) #s
#define LINE_FILE "line "SSTR(__LINE__)" of file "__FILE__


int main (void)
{
	const char *str = LINE_FILE;
	
	while (*str) putchar(*str++);
	
	return 0;
}


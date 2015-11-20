// Suppose that a program needs to display messages in either 
// English, French, or Spanish. 
// Using conditional compilation, write a program fragment that displays
// one of the following three messages, depending on whether or 
// not the specified macro is defined:

#include <stdio.h>

#define ENGLISH 0
#define FRENCH 0
#define SPANISH 1

int main (void)
{
#if ENGLISH 
	printf("Insert Disk 1\n");
#elif FRENCH
	printf("Inserez Le Disque 1\n");
#elif SPANISH 
	printf("Inserte EL Disco 1\n");
#else
	#error Please set Language option
#endif

	return 0;
}


// Identify which calls don't work and explain why

#include <stdio.h>

int main (void)
{
	printf("%c", 'a');
	//printf("%c", "b");
	//printf("%s", 'c');
	printf("%s", "d");
	//printf('e');
	printf("f");
	
	putchar('g');
	//putchar("h");
	//puts('i');
	puts("j");
	puts("");
	
	return 0;
}

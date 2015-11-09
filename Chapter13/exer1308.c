// What will be the value of the string str after the following statements have been executed?

#include <stdio.h>
#include <string.h>

int main (void)
{
	char str[20];
	
	strcpy(str, "tire-bouchon");
	strcpy(&str[4], "d-or-wi");
	strcat(str, "red?");
	
	printf("test: %s\n", str);
	
	return 0;
}

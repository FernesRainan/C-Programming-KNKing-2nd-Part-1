#include <stdio.h>

// The following function is supposed to print an error message. Each message is preceded by
// an integer, indicating the number of times the function has been called. Unfortunately, the
// function always displays 1 as the number of the error message. Locate the error and show
// how to fix it without making any changes outside the function.

void print_error(const char *message)
{
	int n = 1;
	printf("Error %d: %s\n", n++, message);
}

void print_error2(const char *message)
{
	static int m = 1;
	printf("Error %d: %s\n", m++, message);
}

int main(void)
{
	int i;
	
	char error[] = "This is original error function";
	char error2[] = "This is fixed function\n";
	
	for (i = 0; i < 5; i++){
		print_error(error);
		print_error2(error2);
	}
	
	return 0;
}


	 

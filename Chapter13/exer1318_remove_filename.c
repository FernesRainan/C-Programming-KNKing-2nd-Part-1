// Write the following function:
// void remove_filename (char *url);
// "http://www.knking.com/index.html"
// The function should modify the string by removing the file name and the preceding slash. 
// "http://www.knking.com"

#include <stdio.h>

void remove_filename (char *url)
{
	char *p = NULL;
	while (*url) {
		if (*url == '/')
			p = url;
		url++;
	}

	if (*p)
		*p = '\0';
}

int main (int argc, char *argv[])
{
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <URL>\n", argv[0]);
		return 1;
	}
	
	remove_filename (argv[1]);
	printf("%s\n", argv[1]);
	
	return 0;
}


	

		

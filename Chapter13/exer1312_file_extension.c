// Write the following function:
// void get_extension (const char *file_name, char *extension);


#include <stdio.h>
#include <string.h>

void get_extension (const char *file_name, char *extension)
{
	char *dot;
	extension[0] = '\0';
	
	if ((dot = strrchr(file_name, '.'))) // find location of last '.', return the pointer location. 
		strcpy(extension, ++dot);
}

int main (int argc, char *argv[])
{
	if (argc != 2){
		fprintf(stderr, "Usage: %s file_name.ext\n", argv[0]);
		return 1;
	}
	
	char ext[16];
	get_extension(argv[1], ext);
	printf("File extension: %s\n", ext);
	
	return 0;
}

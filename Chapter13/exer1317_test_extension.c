// Write the following function:
// bool test_extension (const char *file_name, 
//                      const char *extension);
// test_extension("memo.txt", "TXT") would return 'true'

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool test_extension (const char *file_name, const char *extension)
{
	int file_length = strlen(file_name);
	int extension_length = strlen(extension);
	
	const char *p = (file_name + file_length) - extension_length;
	while (*p)
		if (toupper(*p++) != toupper(*extension++))
			return false;
	
	return true;
}

int main (int argc, char *argv[])
{
	if (argc != 3) {
		fprintf(stderr, "Usage: %s file_name extension\n", argv[0]);
		return 1;
	}
	
	printf("%d\n", test_extension(argv[1], argv[2]));
	
	return 0;
}

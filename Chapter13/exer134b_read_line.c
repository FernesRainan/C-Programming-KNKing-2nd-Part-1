// Modify the 'read_line' function in each of the following ways:
// (b) Have it stop reading at the first white-space character.
// To determine whether or not a character is white space, call the isspace function. 

int read_line (char str[], int n)
{
	int ch, i = 0;
	
	while (!isspace(ch = getchar()))
		if (i < n)
			str[i++] = ch;
	
	str[i] = '\0';
	
	return i;
}

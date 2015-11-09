// Modify the 'read_line' function in each of the following ways:
// (c) Have it stop reading at the first new-line character, 
// then store the new-line character i the string.

int read_line (char str[], int n)
{
	int ch, i = 0;
	
	do {
		ch = getchar();
		if (i < n)
			str[i++] = ch;
	} while (ch != '\n');
	str[i] = '\0' ;
	
	return i;
}

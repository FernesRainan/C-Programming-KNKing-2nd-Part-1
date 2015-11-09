// Modify the 'read_line' function in each of the following ways:
// (a) Have it skip white space before beginning to store input characters

int read_line (char str[], int n)
{
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
		if (i == 0 && isspace(ch))
			; // ignore //
			
		else if (i < n)
			str[i++] = ch;
	str[i] = '\0';
		
	return i;
}

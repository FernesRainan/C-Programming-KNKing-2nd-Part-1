// Modify the 'read_line' function in each of the following ways:
// (d) Have it leave behind characters that it doesn't have room to store. 

int read_line (char str[], int n)
{
	int ch, i ;
	
	for (i = 0; i < n; i++)
	{
		ch = getchar();
		if (ch == '\n')
			break;
		str[i] = ch;
	}
	str[i] = '\0';
	
	return i;
}

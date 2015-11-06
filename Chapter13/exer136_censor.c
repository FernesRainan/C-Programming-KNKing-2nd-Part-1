// Write a function named 'censor' that modifies a string by replacing every occurence of foo by xxx.
// For example, the string "food fool" would become "xxxd xxxl". 
// Make the function as short as possible without sacrificing clarity

void censor (char s[])
{
	int i;
	
	for ( i = 0; s[i] != '\0'; i++)
		if (s[i] == 'f' && s[i+1] == 'o' && s[i+2] == 'o')
			s[i] = s[i+1] = s[i+2] = 'x';
}

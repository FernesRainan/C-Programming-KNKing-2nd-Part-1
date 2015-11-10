// Printing names
// Modify Programming Project 11 from Chapter 7 so that it includes the following function:
// void reverse_name (char *name);

#include <stdio.h>

#define NAME_LENG 41

int read_line (char str[], int n);
void reverse_name (char *name);

int main (void)
{
	char name[NAME_LENG];
	
	printf("\nEnter a first and last name: ");
	read_line(name, NAME_LENG);
	reverse_name (name);	
		
	return 0;
}

int read_line (char str[], int n)
{
	int i, ch;
	
	for (i = 0; i < n; i++) {
		ch = getchar();
		if (ch == '\n')
			break;
		str[i] = ch;
	}
	str[i] = '\0';
	
	return i;
}

void reverse_name (char *name)
{
	char first_initial;
	
	while (*name == ' ') name++;              // clear blank
	first_initial = *name;                    // store first initial
	
	while (*name != ' ') name++;              // find the blank between first name and last name
	printf("%s, %c\n", name + 1, first_initial);    // skip blank by '+1'
	
	return ;
}

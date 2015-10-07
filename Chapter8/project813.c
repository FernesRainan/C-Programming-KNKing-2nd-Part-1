//Modify Programming Project 11 from Chapter 7 
//so that the program labels its output:
//Enter a first and last name: Lloyd Fosdick
//You entered the name: Fosdick, L.

#include <stdio.h>

#define NAME_LENGTH 20

int main (void)
{
	char first_initial, last_name[NAME_LENGTH];
	int i = 0;
   	
	printf("\nEnter a first and last name: ");
	scanf(" %c", &first_initial); // gets first letter of first name. Ignores leading blank spaces//
	printf("You entered the name: ");
	
	while (getchar() != ' '){
       // ignore remaining first name characters until a blank space is reached //
 		;
	}
	
	while ((last_name[i] = getchar()) != '\n'){
		if (last_name[i] == ' ') 
		/* ignore blank spaces before and after last name */
		;
		else
			printf("%c", last_name[i++]);
	}

	printf(", %c.\n", first_initial);

	return 0;
}

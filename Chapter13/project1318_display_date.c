// Write a program that accepts a date from the user in the form 
// mm/dd/yyyy and then displays it in the form month dd, yyyy, 
// where month is the name of the month:

// Enter a date (mm/dd/yyyy): 2/17/2011
// You entered the date February 17, 2011
// Store the month names in an array that contatins pointers to strings

#include <stdio.h>

int main (void)
{
	int month, day, year;
	char *month_name[] = {"January", "Feburary", "March", "April",
		                    "May", "June", "July", "August",
		                  "September", "October", "November", "December"};
  
  printf("Enter a date (mm/dd/yyyy): ");
  scanf(" %d/%d/%d", &month, &day, &year);
  
  if (month < 0 || month > 12 || day < 0 || day > 31) {
  	printf("Please enter a proper date\nProgram Aborted.\n");
  	return 1;
  }
  
  printf("You entered the date %s %d, %d\n", month_name[month - 1], day, year);
  
  return 0;
}
 
  

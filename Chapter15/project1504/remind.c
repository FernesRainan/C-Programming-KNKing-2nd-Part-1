// The user will enter a series of reminders, with each prefixed by a day of the month. 
// When the user enters 0 instead of a valid day, 
// the program will print a list of all reminders entered, sorted by day. 
// Here's what a session with the program will look like. 
//
// Enter day and reminder: 24 Susan's birthday
// Enter day and reminder: 5 6:00 - Dinner with Marge and Russ
// Enter day and reminder: 26 Movie - "Chinatown"
// Enter day and reminder: 7 10:30 - Dental appointment
// Enter day and reminder: 12 Movie - "Dazed and Confused"
// Enter day and reminder: 5 Saturday class
// Enter day and reminder: 12 Saturday class
// Enter day and reminder: 0
//
// Day Reminder
//   5 Saturday class
//   5 6:00 - Dinner with Marge and Russ
//   7 10:30 - Dental appointment
//  12 Saturday class
//  12 Movie - "Dazed and Confused"
//  24 Susan's birthday
//  26 Movie - "Chinatown"


// remind.c : Prints a one-month reminder list

#include <stdio.h>
#include <string.h>
#include "readline.h"

#define MAX_REMIND 50 // maximum number of reminders //
#define MSG_LEN 60    // max length of reminder message //

int main (void)
{
	char reminders [MAX_REMIND][MSG_LEN+3];
	char day_str[3], msg_str[MSG_LEN+1];
	int day, i, j, num_remind = 0;
	
	for (;;) {
		if (num_remind == MAX_REMIND) {
			printf("-- No space left -- \n");
			break;
		}
		
		printf("Enter day and reminder: ");
		scanf("%2d", &day);
		if (day == 0) 
			break;
		sprintf(day_str, "%2d", day);
		read_line(msg_str, MSG_LEN);
		
		for ( i = 0; i < num_remind; i++)
			if (strcmp(day_str, reminders[i]) < 0)
				break;
		for ( j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j-1]);
		
		strcpy(reminders[i], day_str);
		strcat(reminders[i], msg_str);
		
		num_remind++;
	}
	
	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);
	
	return 0;
}

	


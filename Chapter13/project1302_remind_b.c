// The user will enter a series of reminders, with each prefixed by a day of the month. 
// When the user enters 0 instead of a valid day, 
// the program will print a list of all reminders entered, sorted by day. 
// Here's what a session with the program will look like. 
//
// Enter day and reminder: 24 20:00 Susan's birthday
// Enter day and reminder: 5 6:00 - Dinner with Marge and Russ
// Enter day and reminder: 26 20:00 Movie - "Chinatown"
// Enter day and reminder: 7 10:30 - Dental appointment
// Enter day and reminder: 12 19:40 Movie - "Dazed and Confused"
// Enter day and reminder: 5 13:00 Saturday class
// Enter day and reminder: 12 13:00 Saturday class
// Enter day and reminder: 0
//
// Day Time  Reminder
//   5 06:00 - Dinner with Marge and Russ
//   5 13:00 Saturday class
//   7 10:30 - Dental appointment
//  12 13:00 Saturday class
//  12 19:40 Movie - "Dazed and Confused"
//  24 20:00 Susan's birthday
//  26 20:00 Movie - "Chinatown"


// Project1302 improve the remind.c (b)
// Allow the user to enter a day, a 24-hour time, and a reminder. 
// The printed reminder list should be sorted first by day, then by time


#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 // maximum number of reminders //
#define MSG_LEN 60    // max length of reminder message //

int read_line (char str[], int n);

int main (void)
{
	char reminders [MAX_REMIND][MSG_LEN+3];
	char date_str[8 + 1], msg_str[MSG_LEN+1];        // DD + ' ' + xx:xx + ' '
	int day, i, j, hour, minute, num_remind = 0;
	
	for (;;) {
		if (num_remind == MAX_REMIND) {
			printf("-- No space left -- \n");
			break;
		}
		
		printf("Enter day, time and reminder: ");                         // project 1302 (b)
		scanf("%2d", &day);                                               // project 1302 (b)
		if (day == 0)                                                     // project 1302 (b)
			break;                                                          // project 1302 (b)
		scanf("%2d:%2d", &hour, &minute);	                                // project 1302 (b)
		
		read_line(msg_str, MSG_LEN);
		
		sprintf(date_str, "%2d %.2d:%.2d", day, hour, minute);            // project 1302 (b)
				
	                                                                    // We need to clear input characters
	                                                                    // So put the new condition below read_line function. 
		if (day < 0 || day > 31){                                         // project 1302 (a)
			printf("Please input proper day.\n");                           // project 1302 (a)
			continue;                                                       // project 1302 (a)
		}                                                                 // project 1302 (a)
	
		if (hour < 0 || hour > 24 || minute < 0 || minute > 60) {         // project 1302 (b)
			printf("Please input proper time.\n");                          // project 1302 (b)
			continue;                                                       // project 1302 (b)
		}                                                                 // project 1302 (b)
	
		for ( i = 0; i < num_remind; i++)
			if (strcmp(date_str, reminders[i]) < 0)
				break;
		for ( j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j-1]);
		
		strcpy(reminders[i], date_str);
		strcat(reminders[i], msg_str);
		
		num_remind++;
	}
	
	printf("\nDay Time  Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);
	
	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0 ;
	
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
		str[i] = '\0';
	return i;
}

	


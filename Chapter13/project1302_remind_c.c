// The user will enter a series of reminders, with each prefixed by a day of the month. 
// When the user enters 0 instead of a valid day, 
// the program will print a list of all reminders entered, sorted by day. 
// Here's what a session with the program will look like. 
//
// Enter day and reminder: 2/24 20:00 Susan's birthday
// Enter day and reminder: 1/5 6:00 - Dinner with Marge and Russ
// Enter day and reminder: 2/26 20:00 Movie - "Chinatown"
// Enter day and reminder: 5/7 10:30 - Dental appointment
// Enter day and reminder: 11/12 19:40 Movie - "Dazed and Confused"
// Enter day and reminder: 8/5 13:00 Saturday class
// Enter day and reminder: 5/12 13:00 Saturday class
// Enter day and reminder: 0
//
//   Day  Time Reminder
//  1/ 5 06:00 - dinner with Marge and Russ
//  2/24 20:00 Susan's birthday
//  2/26 20:00 Movie - "Chinatown"
//  5/ 7 10:30 - Dental appintment
//  5/12 13:00 Saturday class
//  8/ 5 13:00 Saturday class
// 11/12 19:40 Movie - "Dazed and Confused"


// Project1302 improve the remind.c (c)
// Have the program print a one-year reminder list. 
// Require the user to enter days in the form month/day. 



#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 // maximum number of reminders //
#define MSG_LEN 60    // max length of reminder message //

int read_line (char str[], int n);

int main (void)
{
	char reminders [MAX_REMIND][MSG_LEN+3];
	char date_str[11 + 1], msg_str[MSG_LEN+1];                          // MM/DD + ' ' + xx:xx + ' '
	int month, day, i, j, hour, minute, num_remind = 0;
	
	for (;;) {
		if (num_remind == MAX_REMIND) {
			printf("-- No space left -- \n");
			break;
		}
		
		printf("Enter month/day, hour:time and reminder: ");              // project 1302 (b), (c)
		scanf("%2d/%2d", &month, &day);                                   // project 1302 (b), (c)
		if (month == 0)                                                   // project 1302 (b), (c)
			break;                                                          // project 1302 (b)
		scanf("%2d:%2d", &hour, &minute);	                                // project 1302 (b)
		
		read_line(msg_str, MSG_LEN);
		
		sprintf(date_str, "%2d/%2d %.2d:%.2d", month, day, hour, minute); // project 1302 (b), (c)
				
	                                                                    // We need to clear input characters
	                                                                    // So put the new condition below read_line function. 
		if (month < 0 || month > 12 || day < 0 || day > 31){              // project 1302 (a), (c)
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
	
	printf("\n   Day  Time Reminder\n");
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

// (C99) Modify the remind2.c program of Section 17.2 so that each element of the
// reminders array is a pointer to a vstring structure (see Section 17.9) rather than
// a pointer to an ordinary string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50 // maximum number of reminders
#define MSG_LEN 60    // max length of reminder message

int read_line (char str[], int n);

struct vstring {                                                   //project1707                                        
	int len;                                                         //project1707
	char chars[];                                                    //project1707
};                                                                 //project1707

int main (void)
{
	struct vstring *reminders[MAX_REMIND];                           //project1707
	char day_str[3], msg_str[MSG_LEN+1];
	int len = 3, day, i, j, num_remind = 0;                          // len is for vstring. day_str + space
	
	for (;;) {
		if (num_remind == MAX_REMIND) {
			printf("-- No space left --\n");
			break;
		}
		
		printf("Enter day and reminder: ");
		scanf("%2d", &day);
		if (day == 0)
			break;
		sprintf(day_str, "%2d", day);
		
		len += read_line(msg_str, MSG_LEN);                            //project1707
		
		for (i = 0; i < num_remind; i++)
			if (strcmp(day_str, reminders[i]->chars) < 0)                //project1707
				break;
		for (j = num_remind; j > i; j--)
			reminders[j] = reminders[j-1];                   
		                                                   
		reminders[i] = malloc(2 + sizeof(struct vstring) + len);       //project1707
		if (reminders[i] == NULL) {                        
			printf("-- No space left --\n");                 
			break;                                           
		}                                                  
		
		strcpy(reminders[i]->chars, day_str);                          //project1707   
		strcat(reminders[i]->chars, msg_str);                          //project1707
		
		num_remind++;
	}
	
	printf("\nDay Reminder\n");
	for ( i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]->chars);                          //project1707
		
	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}


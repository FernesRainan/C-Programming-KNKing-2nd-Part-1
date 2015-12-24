// Modify Programming Project 8 from Chapter 5 so that the times are sotred in a single array.
// The elements of the array will be structures, each containing a departure time and the
// corresponding arrival time. (Each time will be an integer, representing the number of minutes
// since midnight.) The program will use a loop to search the array for the departure time closest
// to the time entered by the user. 

// Calculating flight time //
struct time {
	int departure, arrival;
};

const struct time travel[8] = {
	{8*60, 10*60+16}, 
	{9*60+43, 11*60+52},
	{11*60+19, 13*60+31},
	{12*60+47, 15*60},
	{14*60, 16*60+8},
	{15*60+45, 17*60+55},
	{19*60, 21*60+20}, 
	{21*60+45, 23*60+58}
};

#define ABSOLUTE(x) (x) > 0 ? (x) : -(x)

#include <stdio.h>

int main (void)
{
    char ch;
    int hours, minutes, closest;
		int time[8], i;
		
		for (;;) {
				
	    printf("\nEnter a 24-hour time(xx:xx): ");
	    scanf("%d:%d", &hours, &minutes);
	
	    minutes = hours*60 + minutes;
	
	    for (i = 0; i < 8; i++)
	    	time[i] = ABSOLUTE(travel[i].departure - minutes); 
	
	    printf("Closest departure time is ");
	
	    if (hours < 8 | hours >= 21) {
	        if (time[0] < time[7]) printf("8:00 a.m., arriving at 10:16 a.m.\n");
	        else printf("9:45 p.m., arriving at 11:58 p.m.\n");
	    }
	    if (hours >= 8 && hours < 9) {
	        if (time[0] < time[1]) printf("8:00 a.m., arriving at 10:16 a.m.\n");
	        else printf("9:43 a.m., arriving at 11:52 a.m.\n");
	    }
	    if (hours >= 9 && hours < 11) {
	        if (time[1] < time[2]) printf("9:43 a.m., arriving at 11:52 a.m.\n");
	        else printf("11:19 a.m., arriving at 1:31 p.m.\n");
	    }
	    if (hours >= 11 && hours < 12) {
	        if (time[2] < time[3]) printf("11:19 a.m., arriving at 1:31 p.m.\n");
	        else printf("12:47 p.m., arriving at 3:00 p.m.\n");
	    }
	    if (hours >= 12 && hours < 14) {
	        if (time[3] < time[4]) printf("12:47 p.m., arriving at 3:00 p.m.\n");
	        else printf("2:00 p.m., arriving at 4:08 p.m.\n");
	    }
	    if (hours >= 14 && hours < 15) {
	        if (time[4] < time[5]) printf("2:00 p.m., arriving at 4:08 p.m.\n");
	        else printf("3:45 p.m., arriving at 5:55 p.m.\n");
	    }
	    if (hours >= 15 && hours < 19) {
	        if (time[5] < time[6]) printf("3:45 p.m., arriving at 5:55 p.m.\n");
	        else printf("7:00 p.m., arriving at 9:20 p.m.\n");
	    }
	    if (hours >= 19 && hours < 21) {
	        if (time[6] < time[7]) printf("7:00 p.m., arriving at 9:20 p.m.\n");
	        else printf("9:45 p.m., arriving at 11:58 p.m.\n");
	    }
	    printf("\nEnter 'q' if you want to quit:  ");
	    while (getchar() != '\n')
	    ;
	    ch = getchar();
	    if ( ch == 'q') break;	    
		}
		
    return 0;
}

        
        
    


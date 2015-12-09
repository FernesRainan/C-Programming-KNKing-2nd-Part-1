// Write the following function, assuming that the time structure contains three members:
// hours, minutes, and seconds (all of type int)
// struct time split_time(long total_seconds);
// total_seconds is a time represented as the number of seconds since midnight. 
// The function returns a structure containing the equivalent time in hours(0-23)
// minutes (0-59), and seconds (0-59);

#include <stdio.h>

struct time {
		int hours, minutes, seconds;
	};

struct time split_time(long total_seconds);

// simple test main function

int main (void)
{
	long total_seconds;
	struct time result;
	
	printf("Please enter total_seconds (0 - 86399) : ");
	scanf("%ld", &total_seconds);
	
	result = split_time (total_seconds);
	
	printf("The result is \n");
	printf("hours: %d minutes: %d seconds: %d\n", result.hours, result.minutes, result.seconds);
	
	return 0;
}

struct time split_time (long total_seconds)
{
	struct time calc;
	
	calc.hours = total_seconds / (60 * 60);
	total_seconds %= 60 * 60;
	calc.minutes = total_seconds / 60;
	calc.seconds = (total_seconds %= 60);
	
	return calc;
}

	
	 
	

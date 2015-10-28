// Modify Programming Project 8 from Chapter 5
// void find_closest_flight (int desired_time,
//                           int *departure_time,
//                           int *arrival_time);

#include <stdio.h>

#define FLIGHTS ((int) (sizeof(departures) / sizeof(departures[0])))

void print_am_pm (int minutes_since_midnight);
void find_closest_flight (int desired_time, int *deparute_time, 
                          int *arrival_time);
int absolute (int n);

const int departures[] = {
	8 * 60, 
	9 * 60 + 43,
	11 * 60 + 19, 
	12 * 60 + 47, 
	14 * 60, 
	15 * 60 + 45,
	19 * 60, 
	21 * 60 + 45
};

const int arrivals[] = {
	10 * 60 + 16,
  11 * 60 + 52,
  13 * 60 + 31,
  15 * 60,
  16 * 60 + 8,
  17 * 60 + 55,
  21 * 60 + 20,
  23 * 60 + 58
};

int main (void)
{
	int departure, arrival;
	int hours, minutes;
	
	printf("Request departure time (e.g. 21:23): ");
	scanf("%d:%d", &hours, &minutes);
	 
	find_closest_flight ( hours * 60 + minutes, &departure, &arrival);
	
	printf("Closest departure time is ");
	print_am_pm (departure);
	printf(", arriving at ");
	print_am_pm (arrival);
	printf("\n");
	
	return 0;
}

void print_am_pm (int minutes_since_midnight)
{
	int hours = minutes_since_midnight / 60;
	int minutes = minutes_since_midnight % 60;
	char meridian[2] = {'A', 'M'};
	
	if (hours >= 12) {
		meridian [0] = 'P';
		hours -= 12;
	}
	if (hours == 0) 
		hours = 12;
	
	printf("%d:%.2d %c.%c.", hours, minutes, meridian[0], meridian[1]);

	return ;
}

int absolute (int n)
{
	return ((n > 0) ? n : -(n));
}

void find_closest_flight (int desired_time, int *departure_time, 
                          int *arrival_time)
{
	int flight, diff, f;
	
	int minimum_difference = 23 * 60 + 59;
	for (flight = 0, f = 0; f < FLIGHTS; f++){
		diff = absolute (desired_time - departures[f]);
		if (diff < minimum_difference){
			minimum_difference = diff;
			flight = f;
		}
	}
	
	*departure_time = departures[flight];
	*arrival_time = arrivals[flight];
}
	
	
	

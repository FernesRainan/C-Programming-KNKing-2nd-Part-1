//Modify Programming project 8 from Chapter 5
//so that the departure times are stored in an array
//and the arrival times are stored in a second array

#include <stdio.h>

#define FLIGHTS ((unsigned) (sizeof(departures) / sizeof(departures[0])))

int main (void)
{
	int departures[] = { 8*60, 9*60+43, 11*60+19, 12*60+47, 14*60, 15*60+45, 19*60, 21*60+45 };
	int arrivals[] = { 10*60+16, 11*60+52, 13*60+31, 15*60, 16*60+8, 17*60+55, 21*60+20, 23*60+58 };
	
	int flight = 0, diff, f, hour_in, minute_in, requested_departure;
	int minimum_difference = 23*60 + 59;
	int hours, minutes;
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour_in, &minute_in);
	
	requested_departure = hour_in * 60 + minute_in;
	
	for (f = 0; f < FLIGHTS; f++){
		diff = departures[f] - requested_departure; 
		diff = diff > 0 ? diff : -diff ; 
		if (diff < minimum_difference){
			minimum_difference = diff;
			flight = f;
		}
	}
	
	printf("closest departure time is: ");
	hours = departures[flight] / 60;
	minutes = departures[flight] % 60;
	char meridian[] = {'a', '.', 'm', '.'};
	
	if (hours >= 12){
		meridian[0] = 'p';
		hours -= 12;
	}
	if (hours == 0){
		hours = 12;
	}
	printf("%d:%.2d %c%c%c%c", hours, minutes, meridian[0], meridian[1], meridian[2], meridian[3]);
	
	printf(", arriving at ");
	hours = arrivals[flight] / 60;
	minutes = arrivals[flight] % 60;
	meridian[0] = 'a';
	
	if (hours >= 12){
		meridian[0] = 'p';
		hours -= 12;
	}
	if (hours == 0){
		hours = 12;
	}
	printf("%d:%.2d %c%c%c%c", hours, minutes, meridian[0], meridian[1], meridian[2], meridian[3]);
	
	return 0;
}

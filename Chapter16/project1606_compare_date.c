// Modify Programming Project 9 from Chapter 5 so that each date entered by the user is
// stored in a date structure (see Exercise 5). Incorporate the compare_dates function of 
// Exercise 5 into your program. 

// Checking the earlier on the calendar

#include <stdio.h>

struct date {
	int month, day, year;
};

int day_of_year (struct date d)
{
	int day_sum = 0;
	
	switch (d.month - 1) {               //12th December, 12 + sum of every days until November 
		case 11:
			day_sum += 30;                   //pass through below//
		case 10:
			day_sum += 31;
		case 9:
			day_sum += 30;
		case 8:
			day_sum += 31;
		case 7:
			day_sum += 31;
		case 6:
			day_sum += 30;
		case 5:
			day_sum += 31;
		case 4:
			day_sum += 30;
		case 3:
			day_sum += 31;
		case 2:
			day_sum += 29;                   //return value is between 1 and 366, so it is 29
		case 1:
			day_sum += 31;
		case 0:
			day_sum += d.day;
	}
	
	return day_sum;
}


int compare_dates(struct date d1, struct date d2)
{
	int i, j;
	
	i = day_of_year (d1);
	j = day_of_year (d2);
	
	if (i < j) return -1;
	else if (i > j) return 1;
	else return 0;
}

//just simple test main function//

int main (void)
{
	struct date x, y;
		
	printf("Please enter day and month, for example 12/02 : ");
	scanf("%d/%d", &x.day, &x.month);
	printf("Please enter day and month again : ");
	scanf("%d/%d", &y.day, &y.month);
	
	printf("First date value is %d.\n", day_of_year(x));
	printf("Second date value is %d.\n", day_of_year(y));
	
	if (compare_dates(x,y) > 0) printf("Second date is earlier.\n");
	else if (compare_dates(x,y) == 0) printf("Two dates are same.\n");
	else printf("First date is earlier.\n");
	
	return 0;
}

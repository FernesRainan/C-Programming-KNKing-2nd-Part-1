// Checking the earlier on the calendar //
// Date: 20150822 //

#define FIRST printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2)
#define SECOND printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1)

#include <stdio.h>


int main (void)
{
    int day1, day2, month1, month2, year1, year2;

    printf("Enter first date (mm/dd/yy) :");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy) :");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 < year2) FIRST;
    else if (year1 > year2) SECOND;
    else {
        if (month1 < month2) FIRST;
        else if (month1 > month2) SECOND;
        else {
            if (day1 < day2) FIRST;
            else if (day1 > day2) SECOND;
        }
    }

    return 0;

}



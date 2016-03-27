#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int hour, minutes, to_minutes, eight_am, nine_43_am,
        eleven_19_am, twelve_47_pm, two_pm, three_45_pm, 
        seven_pm, nine_45_pm, midnight;

    char period;

    printf("\nDeparture     Arrival\n");
    printf("-----------------------\n");
    printf(" 8:00 am       10:15 am\n");
    printf(" 9:43 am       11:52 am\n");
    printf("11:19 am        1:31 pm\n");
    printf("12:47 pm        3:00 pm\n");
    printf(" 2:00 pm        4:08 pm\n");
    printf(" 3:45 pm        5:55 pm\n");
    printf(" 7:00 pm        9:20 pm\n");
    printf(" 9:45 pm       11:58 pm\n");

    printf("\n\nEnter a 12-hour clock time (hours:minutes AM/PM): ");
    scanf("%d:%d %c", &hour, &minutes, &period); // the space before %c is important //

    switch (period = toupper(period)){
        case 'P':
            hour += 12;
            break;

        case 'A':
            if (hour == 12)
                hour -= 12;
            break;
        
        default:
            printf("Invalid AM/PM entry. Please run program again.\n\n");
            return 0;
    }

    to_minutes = hour * 60 + minutes;
    eight_am = 8 * 60;
    nine_43_am = 9 * 60 + 43;
    eleven_19_am = 11 * 60 + 19;
    twelve_47_pm = 12 * 60 + 47;
    two_pm = 14 * 60;
    three_45_pm = 15 * 60 + 45;
    seven_pm = 19 * 60;
    nine_45_pm = 21 * 60 + 45;
    midnight = 23 * 60 + 59;

    if (to_minutes >= 24 * 60 || to_minutes <= 0)
        printf("Invalid hours:minutes entry. Please run program again.\n");

    else {
        printf("\nClosest departure time is: ");

        if (to_minutes >= 1 && to_minutes < eight_am)
            printf("8:00 am, arriving at 10:15 am\n");

        if (to_minutes >= eight_am && to_minutes < nine_43_am){
            if(nine_43_am - to_minutes < to_minutes - eight_am)
                printf("9:43 am, arriving at 11:52 am");
            else 
                printf("8:00 am, arriving at 10:15 am");
        }

        if (to_minutes >= nine_43_am && to_minutes < eleven_19_am)
            nine_43_am - to_minutes < to_minutes - eleven_19_am ? 
                printf("11:19 am, arriving at 1:30 pm") : printf("9:43 am, arriving at 11:52 am");

        if (to_minutes >= eleven_19_am && to_minutes < twelve_47_pm)
            twelve_47_pm - to_minutes < to_minutes - eleven_19_am ?
                printf("12:47 pm, arriving at 3:00 pm") : printf("11:19 am, arriving at 1:30 pm");

        if (to_minutes >= twelve_47_pm && to_minutes < two_pm)
            two_pm - to_minutes < to_minutes - twelve_47_pm ?
                printf("2:00 pm, arriving at 4:08 pm") : printf("12:47 pm, arriving at 3:00 pm");

        if (to_minutes >=two_pm && to_minutes < three_45_pm)
            three_45_pm - to_minutes < to_minutes - two_pm ?
                printf("3:45 pm, arriving at 5:55 pm") : printf("2:00 pm, arriving at 4:08 pm");

        if (to_minutes >= three_45_pm && to_minutes < seven_pm)
            seven_pm - to_minutes < to_minutes - three_45_pm ?
                printf("7:00 pm, arriving at 9:20 pm") : printf("3:45 pm, arriving at 5:55 pm");

        if (to_minutes >= seven_pm && to_minutes < nine_45_pm)
            nine_45_pm - to_minutes < to_minutes - seven_pm ?
                printf("9:45 pm, arriving at 11:58 pm") : printf("7:00 pm, arriving at 9:20 pm");

        if (to_minutes >= nine_45_pm && to_minutes <= midnight)
            printf("9:45 pm, arriving at 11:58 pm");
    }

    printf("\n\n");

    return 0;
}


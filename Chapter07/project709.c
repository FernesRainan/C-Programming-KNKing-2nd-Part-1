//Asking the user for a 12-hour time, then displays the time in 24-hour//
#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int hour, minutes;
    char period;

    printf("\nEnter a 12-hour time (hours:minutes AM/PM): ");
    scanf("%d:%d %c", &hour, &minutes, &period);
    
    if (hour < 1 || hour > 12) {
        printf("Hours entry out of range. Please run program again.\n\n");
        return 0;
    } else if (minutes < 0 || minutes > 59) {
        printf("Minutes entry out of range. Please run program again.\n\n");
        return 0;
    } else if ((period = toupper(period)) == 'A' && hour == 12)
        hour = 0;
    else if ((period = toupper(period)) == 'P' && hour == 12)
        hour = 0;

    switch (period = toupper(period)){
        case 'P':
            hour += 12;
            break;
        case 'A':
            break;
        default:
            printf("Invalid AM/PM entry. Please run program again.\n\n");
            return 0;
    }

    printf("Equivalent 24-hour time: %2d:%.2d\n\n", hour, minutes);

    return 0;
}


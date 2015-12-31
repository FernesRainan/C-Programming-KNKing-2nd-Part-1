#include <stdio.h>

int main (void)
{
    int hours, minutes;

    printf("Enter a 24-hour time (xx:xx): ");
    scanf("%d:%d", &hours, &minutes);

    printf("Equivalent 12-hour time:");

    if (minutes >= 0 && minutes < 60){
        if (hours > 0 && hours < 12)
            printf("%2d:%2d AM\n", hours, minutes);
        else if (hours == 12) 
            printf ("%2d:%2d PM\n", hours, minutes);
        else if (hours > 12 && hours < 24) 
            printf ("%2d:%2d PM\n", hours-12, minutes);
        else if (hours == 24)
            printf ("%2d:%2d AM\n", hours-12, minutes);
        else if (hours == 0)
            printf ("%2d:%2d AM\n", hours, minutes);
        else printf("Invalid hour!!\n");
    }
    else printf("Invalid minute!!\n");

    return 0;

}



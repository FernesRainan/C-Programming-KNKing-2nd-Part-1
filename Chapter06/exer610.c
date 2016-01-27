// Finding earliest date //

#define EARLY   eyy = yy; edd = dd; emm = mm;
#include <stdio.h>

int main (void)
{
    int mm, dd, yy;
    int emm, edd, eyy;

    printf("Enter a date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &emm, &edd, &eyy);
 
    if ( emm == 0 | edd == 0 | eyy == 0 ) return 0;

    while ( emm != 0 && edd != 0 && eyy != 0) {
        printf("Enter a date (mm/dd/yy) : ");
        scanf("%d/%d/%d", &mm, &dd, &yy);

        if (mm == 0 | dd == 0 | yy == 0) break;
        
        if (eyy > yy) {EARLY}
        else if (eyy == yy)
            if (emm > mm) {EARLY}
            else if (emm == mm)
                if (edd > dd) {EARLY}

    }

    printf("%d/%d/%.2d is the earliest date\n", emm, edd, eyy);

    return 0;
}   

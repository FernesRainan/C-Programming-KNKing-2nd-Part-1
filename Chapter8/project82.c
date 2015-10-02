// Modify the repdigit.c program of Section 8.1 so that it prints a table showing
// how many times each digit appears in the number:
// Enter a number: 41271092
// Digit: 				0	1	2	3	4	5	6	7	8	9
// Occurrences:		1	2	2	0	1	0	0	1	0	1

#include <stdio.h>

int main(void)
{
    int digit_count[10] = {0};
    int digit;
    long n;

    printf("\nEnter a number: ");
    scanf("%ld", &n);

    printf("Digit:		0	1	2	3	4	5	6	7	8	9\n");
    printf("Occurrences: ");
    
    while (n > 0){
        digit = n % 10;
        digit_count[digit]++;
        n /= 10;
    }
    
    for (digit=0; digit<10; digit++)
    {
    	printf("\t%d", digit_count[digit]);
    }
    
    printf("\n\n");
    
 	  return 0;
}

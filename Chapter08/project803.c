// Modify the repdigit.c program of Section 8.1 so that the user can enter more 
// thenone number to be tested for repeated digits. The program should terminate 
// when the user enters a number that's less than or equal to 0.

#include <stdbool.h> // C99 only
#include <stdio.h>

int main (void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: (When you enter '0' or less than '0', then it aborts) ");
    scanf("%ld", &n);
	while (n > 0){
			
	    while (n > 0){
	        digit = n % 10;
	        if (digit_seen[digit])
	            break;
	        digit_seen[digit] = true;
	        n /= 10;
	    }

	    if (n > 0)
	        printf("Repeated digit.\n");
	    else 
	        printf("No repeated digit\n");
		
		printf("\nEnter a number: ");
		scanf("%ld", &n);
	}
		
	printf("\nBye!\n");
	return 0;
}

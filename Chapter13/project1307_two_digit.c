// Modify Programming Project 11 from Chapter 5 so that it uses arrays
// containing pointers to strings instead of 'switch' statements.
// For example, instead of using a 'switch' statement to print the word for
// the first digit, use the digit as an index into an array that contains
// the strings "twenty", "thirty", and so forth. 

#include <stdio.h>

int main (void)
{
  	const char *i[] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen",
  		                 "sixteen", "seventeen", "eighteen", "nineteen"} ;
	  const char *fd[] = {"twenty-", "thirty-", "forty-", "fifty-", "sixty-",
			                  "seventy-", "eighty-", "ninety-"};
		const char *sd[] = {"one", "two", "three", "four", "five",
			                "six", "seven", "eight", "nine"};
    
    int number, first, second;
    
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    first = number / 10; second = number % 10;

    if (number < 10 || number > 99) 
    	printf("Please enter a TWO-DIGIT number!\nProgram aborted.\n");
    else if (number == 10)
    	printf("You entered the number ten.\n");
    else if (number > 10 && number < 20) 
    	printf("You entered the number %s\n", i[number - 11]);
		else 
			printf("You entered the number %s%s\n", fd[first - 2], sd[second - 1]);
		
    return 0;
}













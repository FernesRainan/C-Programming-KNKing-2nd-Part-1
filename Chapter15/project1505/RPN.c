// Reverse Polish Notation (RPN) //

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
	char ch;
	int value;
	
	for (;;) {
		printf("Enter an RPN expression: ");
		
		for (;;) {
			
			scanf(" %1c", &ch);
			
			if (ch >= '0' && ch <= '9')
				push ((int) ch - '0');
			else if (ch == '+')
				push (pop() + pop());
			else if (ch == '-')
				subtract();
			else if (ch == '*')
				push (pop() * pop());
			else if (ch == '/')
				divide();
			else break;
		}
		
		if (ch == '='){
			value = pop();
			if (is_empty()){ 
				printf("Value: %d\n", value);
			} 
			else {
				warn_incomplete();
				make_empty();
			}
		}
		else {
			break;
		}
	}
	
	return 0;
}



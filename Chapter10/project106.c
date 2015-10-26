// Reverse Polish Notation (RPN) //

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

//exernal variables //
char contents [STACK_SIZE];
int top = 0;
//////////////////////

void too_complex(void)
{
	printf("Expression is too complex.\n");
	exit(EXIT_FAILURE);
}
void not_enough (void)
{
	printf("Not enough operands in expression.\n");
	exit (EXIT_FAILURE);
}

void stack_underflow(void)
{
	not_enough();
}
void stack_overflow(void)
{
	too_complex();
}

void make_empty (void)
{
	top = 0;
}

bool is_empty (void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push (int operand)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = operand;
}

char pop (void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void warn_incomplete (void)
{
	printf("Incomplete expression.\n");
}

void subtract(void)
{
	int subtrahend = pop();
	int minuend = pop();
	
	push(minuend - subtrahend);
}

void divide (void)
{
	int divisor = pop();
	int dividend = pop();
	
	push(dividend / divisor);
}

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



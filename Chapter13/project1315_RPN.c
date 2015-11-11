// Reverse Polish Notation (RPN) 
// Enter an RPN expression: 1 2 3 * + =
// Value of expression: 7
// Enter an RPN expression: 5 8 * 4 9 - / =
// Value of expression: -8
// Enter an RPN expression: q

// Modify Programming Project 6 from Chapter 10 so that it includes the following function:
// int evaluate_RPN_expression (const char *expression);
// The function returns the value of the RPN expression pointed to by expression. 

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

int evaluate_RPN_expression (const char *expression);

int main(void)
{
	char expression[STACK_SIZE];
	
	for (;;) {		
		printf("Enter an RPN expression: ");
		gets(expression);
		printf("Value: %d\n", evaluate_RPN_expression(expression));
	}
	
	return 0;
}

int evaluate_RPN_expression (const char *expression)
{
	char ch;
	int i, value;
	
	for (i = 0; i < STACK_SIZE - 1 ; i++) {
		
		while (expression[i] == ' ') i++ ;   // Skip blanks
		
		ch = expression[i];
		if (ch == 'q') exit(0);              // Quit program. Enter 'q' 
		
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
			return value;
		} 
		else {
			warn_incomplete();
			make_empty();
		}
	}
	else {
		printf("Something wrong. Missing '='?\n");
		return 0;
	}
}

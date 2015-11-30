#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

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

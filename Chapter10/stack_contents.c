//Stack and Contents example//

#include <stdbool.h>

#define STACK_SIZE 100

//exernal variables //
int contents [STACK_SIZE];
int top = 0;
//////////////////////

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

void push (int i)
{
	if (is_full())
		stck_overflow();
	else
		contents[top++] = i;
}

int pop (int i)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

	

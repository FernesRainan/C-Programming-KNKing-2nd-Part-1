//Modify the stack example of Section 10.2//


#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100

//exernal variables //
char contents [STACK_SIZE];
int top = 0;
//////////////////////

void nested (void)
{
	printf("Parentheses/braces are nested properly.\n");
}
void not_nested (void)
{
	printf("Parentheses/braces are not nested properly.\n");
}

void stack_underflow(void)
{
	not_nested();
	return ;
}
void stack_overflow(void)
{
	printf("Stack overflow\n");
	return ;
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

void push (char i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

char pop (void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

int main (void)
{
	char i;
	
	printf("Enter parentheses and/or braces: ");
	
	while ((i = getchar()) != '\n'){
		switch (i) {
			case '(': case '{':
				push(i); 
				break;
			case ')':
				if (is_empty() || pop() != '(')
					not_nested(); 
					break;
			case '}':
				if (is_empty() || pop() != '{')
					not_nested(); 
					break;
		}
	}
	
	if (is_empty())
		nested();
	else 
		not_nested();
		
	return 0;
}

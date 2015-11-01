// Exercise 12.4
// Rewrite the make_empty, is_empty, and is_full function of Section 10.2

int *top_ptr;

void make_empty(void)
{
	top_ptr = &contens[0];
}

bool is_empty(void)
{
	return top_ptr == &contents[0];
}

bool is_full (void)
{
	return top_ptr == &contents[STACK_SIZE];
}


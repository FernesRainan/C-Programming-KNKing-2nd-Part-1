#include <stdio.h>

// Suppose that f and p are declared as follows:
struct {
	union {
		char a, b;
		int c;
	} d;
	int e[5];
} f, *p = &f;

// Which of the following statements are legal?

int main (void)
{
	//p->b = ' ';
	p->d.b = ' ';
	p->e[3] = 10;
	(*p).d.a = '*';
	//p->d->c = 20;
	p->d.c = 20;
}



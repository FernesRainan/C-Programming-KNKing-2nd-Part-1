 // In the following declarations, the x and y structures have members 
// named x and y:
// struct { int x, y; } x;
// struct { int x, y; } y;

#include <stdio.h>

int main (void)
{
	struct {
		int x, y;
	} x;
	
	struct {
		int x, y;
	} y;
	
	x.x = 10;
	x.y = 12;
	y.x = 14;
	y.y = 16;
	
	printf("x.x is %d.\n", x.x);
	printf("x.y is %d.\n", x.y);
	printf("y.x is %d.\n", y.x);
	printf("y.y is %d.\n", x.x);
	
	return 0;
}

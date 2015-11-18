// For each of the following macros, give an example that illustrates a problem with the macro
// and show how to fix it. 
// #define AVG(x, y) (x-y)/2
// #define AREA(x, y) (x)*(y)

#include <stdio.h>

#define AVG1(x, y) (x+y)/2
#define AVG2(x, y) (((x)+(y))/2)
#define AREA1(x, y) (x)*(y)
#define AREA2(x, y) ((x)*(y))
#define TEST(x) printf(#x " = %d.\n", x)

int main (void)
{
	printf("\nAVG1(x,y) is (x+y)/2\n");
	printf("AVG2(x,y) is (((x)+(y))/2)\n");
	printf("AREA1(x,y) is (x)*(y)\n");
	printf("AREA2(x,y) is ((x)*(y))\n\n");
	
	TEST(14/AVG1(5+5, 2+2));
	TEST(14/AVG2(5+5, 2+2));
	TEST(10/AREA1(5,2));
	TEST(10/AREA2(5,2));
	
	return 0;
}

	

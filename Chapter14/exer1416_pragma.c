// Assume that the following macro definitions are in effect:
// What will the following line look like after macro expansion?

#include <stdio.h>

#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main (void)
{
	IDENT(foo);
	
	return 0;
}

// int main (void)
// {
// 
// # 11 "exer1416.c"
// #pragma ident "foo"
// # 11 "exer1416.c"
// ;
// 
//  return 0;
// }


// What are the integer values of the enumeration constants in each of the following 
// declarations?

#include <stdio.h>

int main (void)
{
	enum {NUL, SOH, STX, ETX} a;
	enum {VT = 11, FF, CR} b;
	enum {SO = 14, SI, DLE, CAN = 24, EM} c;
	enum {ENQ = 45, ACK, BEL, LF = 37, ETB, ESC} d;
	
	printf("Num one result is NUL %d SOH %d STX %d ETX %d.\n", NUL, SOH, STX, ETX);
	printf("Num two result is VT %d FF %d CR %d.\n", VT, FF, CR);
	printf("Num three result is SO %d SI %d DLE %d CAN %d EM %d.\n", SO, SI, DLE, CAN, EM);
	printf("Num four result is ENQ %d ACK %d BEL %d LF %d ETB %d ESC %d.\n", ENQ, ACK, BEL, LF, ETB, ESC);
	
	return 0;
}

	
	

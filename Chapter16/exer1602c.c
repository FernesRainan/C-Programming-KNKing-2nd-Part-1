// Modify the declaration in part (a) so that c1's members initially have values 0.0
// and 1.0, while c2's members are 1.0 and 0.0 initially. ( c3 is not initialized)

//Write statements that copy the members of c2 into c1. 

struct {
	double real, imaginary;
} c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

c1 = c2;

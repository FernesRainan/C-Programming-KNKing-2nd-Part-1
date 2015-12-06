// Modify the declaration in part (a) so that c1's members initially have values 0.0
// and 1.0, while c2's members are 1.0 and 0.0 initially. ( c3 is not initialized)

// Write statements that add the corresponding members of c1 and c2, 
// stroing the result in c3.

struct {
	double real, imaginary;
} c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

c3.real = c1.real + c2.real;
c3.imaginary = c1.imaginary + c2.imaginary;



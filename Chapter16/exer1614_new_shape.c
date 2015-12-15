// Let shape be the structure tag declared in Exercise 13
struct point {
	int x, y;
};

struct shape {
	int shape_kind;               //RECTANGLE or CIRCLE //
	// enum {RECTANGLE, CIRCLE} shape_kind;
	struct point center;          // coordinates of center //
	union {
		struct {
			int height, width;
		} rectangle;
		struct { int radius;
		} circle;
	} u;
} s;

// Write functions that perform the following operations on a shape structure s passed as an argument:
// (a) Compute the area of s.
double area (struct shape s)
{
	if (s.shape_kind == RECTANGLE)
		return s.u.rectangle.height * s.u.rectangle.width;
	else 
		return 3.14159 * s.u.circle.radius * s.u.circle.radius;
}
	
// (b) Move s by x unis in the x direction and y units in the y direction, 
// returning the modified version of s. 
// (x and y are additional arguments to the function.)

struct shape move (struct shape s, int x, int y)
{
	struct shape new_shape = s;
	
	new_shape.center.x += x;
	new_shape.center.y += y;
	
	return new_shape;
}

// (c) Scale s by a factor of c (a double value). returning the modified version of s. 
// (c is an additional argument to the function.)
struct shape scale (struct s, double c)
{
	struct shape new_shape = s;
	
	if (new_shape.shape_kind == RECTANGLE) {
		new_shape.u.rectangle.height *= c;
		new_shape.u.rectangle.width *= c;
	} else 
		new_shape.u.circle.radius *= c;
		
	return new_shape;
}

		

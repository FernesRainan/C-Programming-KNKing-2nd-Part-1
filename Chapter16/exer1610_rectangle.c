// The following structures are designed to store information about objects on a graphics
// screen:
struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right;};
// A point structure stores the x and y coordinates of a point on the screen. A rectangle
// structure stores the coordinates of the upper left and lower right cornets of a rectangle. 
// Write functions that perform the following operations on a rectangle structure r passed as
// an argument:

// (a) Compute the area of r. 

int compute_area (struct rectangle r)
{
	int area = (r.upper_left.x - r.lower_right.x) * (r.upper_left.y - r.lower_right.y);
	return (- area);                
}

// (b) Compute the center of r, returning it as a point value. 
// If either the x or y coordinate of the center isn't an integer, 
// store its truncated value in the point structure. 

struct point find_center (struct rectangle r)
{
	struct point center;
	
	center.x = - ((r.upper_left.x - r.lower_right.x) / 2);
	center.y = (r.upper_left.y - r.lower_right.y) / 2;
		
	return center;
}

// (c) Move r by x units in the x direction and y units in the y direction, 
// returning the modified version of r. (x and y are additional arguments to the function.)

struct rectangle move (struct rectangle r, int x, int y)
{
	r.upper_left.x += x ;
	r.upper_left.y += y ; 
	
	r.lower_right.x += x ;
	r.lower_right.y += y ;
	
	return r;
}

// (d) Determine whether a point p lies within r, returning true of false. 
// (p is and additional argument of type struct point.)

bool check_inside (struct rectangle r, struct point p)
{
	if (p.x < r.upper_left.x || p.x > r.lower_right.x) return false;
	else if (p.y > r.upper_left.y || p.y < r.lower_left.y) return false;
	else return true;
}


	

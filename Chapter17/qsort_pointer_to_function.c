// To sort the inventory array of Section 16.3, we'd use the following call of
// qsort:
qsort(inventory, num_parts, sizeof(struct part), compare_parts);

// here's how the compare_parts function might look:
int compare_parts(const void *p, const void *q)
{
	const struct part *p1 = p;
	const struct part *q1 = q;
	
	if (p1->number < q1->number)
		return -1;
	else if (p1->number == q1->number)
		return 0;
	else 
		return 1;
}

// Notice that we can replace p1 and q1 by cast expressions:
int compare_parts(const void *p, const void *q)
{
	if (((struct part *) p)->number <
		  ((struct part *) q)->number)
		return -1;
	else if (((struct part *) p)->number ==
		       ((struct part *) q)->number)
		return 0;
	else 
		return 1;
}

// We can make compare_parts even shorter by removing the if statements:
int compare_parts(const void *p, const void *q)
{
	return ((struct part *) p)->number - 
	       ((struct part *) q)->number;
}

// To sort the inventory array by part name instead of part number, we'd use
// the following version of compare_parts:
int compare_parts(const void *p, const void *q)
{
	return strcmp(((struct part *) p)->name, 
	              ((struct part *) q)->name);
}

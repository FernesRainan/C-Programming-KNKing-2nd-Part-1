// Let a be an array of 100 integers. Write a call of qsort that sorts only the last 50 elements
// in a (You don't need to write the comparison function.)

void qsort(void *base, size_t nmemb, size_t size, 
           int (*compar)(const void *, const void *)); // proto-type

qsort (inventory, num_parts, sizeof(struct part), comapre_parts);

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

int compare_parts(const void *p, const void *q)
{
	return ((sturct part *) p)->number -
	       ((sturct part *) q)->number);
}

//Answer: 
qsort(&a[50], 50, sizeof(a[0]), compare);


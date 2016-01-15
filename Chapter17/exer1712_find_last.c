#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

// Write the following function:
struct node *find_last(struct node *list, int n);
// The list parameter points to a linked list. The function should return a pointer to the last
// node that contains n; it should return NULL if n doesn't appear in the list. Assume that the
// node structure is the one defined in Section 17.5

struct node *find_last(struct node *list, int n)
{
	struct node *ptr, *last;
	
	if (list == NULL) {
		printf("Error. List is empty. Program aborted.\n");
		exit(EXIT_FAILURE);
	}
	
	last = NULL;
	for (ptr = list; ptr != NULL; ptr = ptr->next) {
		if (ptr->value == n) last = ptr;	
	}
	
	if (last == NULL)
		return NULL;
	else 
		return last;
}


		

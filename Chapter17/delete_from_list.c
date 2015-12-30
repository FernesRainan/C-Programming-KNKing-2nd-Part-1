// The following function, delete_from_list, uses the strategy that we've 
// just outlined. When given a list and an integer n, the function deletes the first node
// containing n. If no node contains n, delete_from_list does nothing. In
// either case, the function returns a pointer to the list. 

struct node *delete_from_list (struct node *list, int n)
{
	struct node *cur, *prev;
	
	for (cur = list, prev = NULL;
	     cur != NULL && cur->value != n;
	     prev = cur, cur = cur->next)
	     ;
	if (cur == NULL)
		return list;                 // n was not found
	if (prev == NULL)
		list = list->next;           // n is in the first node, requires a different bypass step
	else
		prev->next = cur->next;      // n is in some other node
	free(cur);
	return list;
}


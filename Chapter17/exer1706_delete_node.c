// Modify the delete_from_list function so that it uses only one pointer variable instead
// of two (cur and prev)
struct node {
	int value;
	struct node *next;
};

//Original example
struct node *delete_from_list(struct node *list, int n)
{
	struct node *cur, *prev;
	
	for (cur = list, prev = NULL;
	     cur != NULL && cur->value != n;
	     prev = cur, cur = cur->next)
	     ;
	if (cur ==NULL) return list; //n was nout found
	if (prev == NULL) return list = list->next; // n is in the first node
	else 
		prev->next = cur->next; // n is in some other node
	free(cur);
	return list;
}

// First example
struct node *delete_from_list(struct node *list, int n)
{
	struct node *cur;
	
	if (list == NULL) return NULL;
	if (list->value == n) {
		cur = list->next;
		free(list);
		return cur;
	}

	list->next = delete_from_list(list->next, n);
	return list;
}


//Second example
struct node *delete_from_list(struct node *list, int n)
{
	struct node **cur;
	
	for (cur = &list; *cur != NULL && (*cur)->value != n; cur = &(*cur)->next)
	;
	
	if (*cur != NULL) *cur = my_free(*cur);
	
	return list;
}

struct node *my_free(struct node *node)
{
	struct node *next = node->next;
	free(node);
	return next;
}

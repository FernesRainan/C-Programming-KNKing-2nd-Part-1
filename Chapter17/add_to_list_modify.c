// new version of add_to_list using a pointer to a pointer
// removing return

void add_to_list(struct node **list, int n)
{
	struct node *new_node;
	
	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
		printf("Error: malloc failed in add_to_list\n");
		return (EXIT_FAILURE);
	}
	new_node->value = n;
	new_node->next = *list;
	*list = new_node;
}

// When we call the new version of add_to_list, the first argument will be the
// address of first:
add_to_list(&first, 10);
// Since list is assigned the address of first, we can use *list as an alias for
// first. In paricular, assigning new_node to *list will modify first. 



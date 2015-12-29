struct node {
	int value;         // data stored in the node
	struct node *next; // pointer to the next node
};

// Inserting a node into a linked list is such a common operation that we'll probably
// want to write a function for that purpose. Let's name the function add_to_list.
// It will have two parameters: list (a pointer to the first node in the old list) and n
// (the integer to be stored in the new node).

struct node *add_to_list(struct node *list, int n)
{
	struct node *new_node;
	
	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
		printf("Error: malloc failed in add_to_list\n");
		exit(EXIT_FAILURE);
	}
	
	new_node->value = n;
	new_node->next = list;
	return new_node;
}

// When we call add_to_list, we'll need to store its return value into first:
// These statements add nodes containing 10 and 20 to the list pointed to by first.
first = add_to_list (first, 10);
first = add_to_list (first, 20);

// create a linked list containing nmbers entered by the user
// first always points to the node containing the last number entered. 
struct node *read_nmbers(void)
{
	struct node *first = NULL;
	int n;
	
	printf("Enter a series of integers (o to terminate): ");
	for (;;) {
		scanf("%d", &n);
		if (n == 0) return first;
		first = add_to_list(first, n);
	}
}


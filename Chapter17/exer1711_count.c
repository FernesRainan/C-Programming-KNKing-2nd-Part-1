#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

// Write the following function:
int count_occurrences(struct node *list, int n);
// The list parameter points to a linked list; the function should return the number of times
// that n appears in this list. Assume that the node structure is the one defined in Section 17.5

struct node *add_to_list(struct node *list, int n);


int main(void)
{
	struct node *list = NULL;
	int number;
	
	printf("Please enter random number, and press '0' to quit\n");
	printf("Input number: ");
	scanf("%d", &number);
	
	while (number != 0) {
		list = add_to_list(list, number);
		printf("Input number: ");
		scanf("%d", &number);
	}
	
	printf("Please enter the number which you want to search and count: ");
	scanf("%d", &number);
	printf("The number %d is stored in the list %d times.\n", number, count_occurrences(list, number));
	
	free(list);
	
	return 0;
}

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

// Answer for exercise 11
int count_occurrences(struct node *list, int n)
{
	struct node *ptr;
	
	if (list == NULL) {
		printf("Error. List is empty. Program aborted.\n");
		exit(EXIT_FAILURE);
	}
	
	int count = 0;
	for (ptr = list; ptr != NULL; ptr = ptr->next) {
		if (ptr->value == n) count++;
	}
	
	return count;
}

		

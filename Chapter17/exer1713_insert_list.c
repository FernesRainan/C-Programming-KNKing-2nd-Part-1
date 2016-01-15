#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

// The following function is supposed to insert a new node into its proper place in an ordered
// list, returning a pointer to the first node in the modified list. Unfortunately, the function
// doesn't work correctly in all cases. Explain what's wrong with it and show how to fix it. 
// Assume that the node structure is the one defined in Section 17.5

struct node *insert_into_ordered_list(struct node *list, 
                                      struct node *new_node)
{
	struct node *cur = list, *prev = NULL;

	if (cur == NULL)                            // added line
		return new_node;                          // added line, when list is empty.
	
	if (cur->value > new_node->value) {         // added line
		list = new_node;                          // added line
		new_node->next = cur;                     // added line
		return list;                              // added line
	}                                           // added line, when new_node should be the first node. 
	
	while (cur->value <= new_node->value) {
		prev = cur;
		if (cur->next != NULL)                    // added line 
			cur = cur->next;
		else {                                    // added line  
			cur->next = new_node;                   // added line
			new_node->next = NULL;                  // added line
			return list;                            // added line
		}                                         // added line, when new_node should be the last node. 
	}
		
	prev->next = new_node;
	new_node->next = cur;
	
	return list;
}

                      

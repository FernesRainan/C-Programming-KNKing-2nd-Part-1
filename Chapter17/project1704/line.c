//Originated by https://github.com/twcamper/c-programming/blob/master/17/17.4-line.c

// Modify the justify program of Section 15.3 by rewriting the line.c file so that it
// stores the current line in a linked list. Each node in the list will store a single word. The
// line array will be replaced by a variable that points to the node containing the first word.
// This variable will store a null pointer whenever the line is empty.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_LEN 80

typedef struct node {
	char word[MAX_LINE_LEN+1];
	struct node *next;
} Node;

Node *line;
Node *tail;
int line_len = 0;
int num_words = 0;

Node *create(void)
{
	Node *new_node = malloc(sizeof(Node));
	if (!new_node) 
	{
		fprintf(stderr, "Memory Allocation Error: malloc() at %s: %d (%s)\n", __FILE__, __LINE__, __func__);
		exit(EXIT_FAILURE);
	}
	
	new_node->word[0] = '\0';
	new_node->next = NULL;
	return new_node;
}

void free_nodes(void)
{
	Node *next = NULL;
	for (Node *n = line; n; n = next)
	{
		next = n->next;
		free(n);
	}
}

void clear_line(void)
{
	free_nodes();
	line = NULL;
	tail = NULL;
	line_len = 0;
	num_words = 0;
}

void add_word(const char *word)
{
	if (num_words == 0)
	{
		line = create();
		tail = line;
	} else
		{
			tail->next = create();
			tail = tail->next;
		}
	
	strcpy(tail->word, word);
	line_len += strlen(word);
	num_words++;
}

int space_remaining(void)
{
	return MAX_LINE_LEN - (line_len + num_words - 1);
}

void write_line(void)
{
	int padding, gaps_needed, extra_spaces, spaces_to_insert, i;
	
	extra_spaces = space_remaining();
	for (Node *n = line; n; n = n->next)
	{
		printf("%s", n->word);
		if(n->next)
		{
			gaps_needed = num_words - 1;
			padding = extra_spaces / gaps_needed;
			spaces_to_insert = 1 + padding;
			
			for (i = 1; i <= spaces_to_insert; i++)
			{
				putchar(' ');
			}
			extra_spaces -= padding;
			num_words--;
		}
	}
	putchar('\n');
}

void flush_line(void)
{
	if (line_len > 0)
	{
		for (Node *n = line; n; n = n->next)
		{
			printf("%s", n->word);
			if (n->next)
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}
	free_nodes();
}

			
	
		

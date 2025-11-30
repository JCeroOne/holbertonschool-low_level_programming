#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees the memory allocated to a linked list
 * @head: The first node of the list
 */
void free_list(list_t *head)
{
	free_node(head);
}

/**
 * free_node - Recursively frees each node of a linked list
 * @node: The first node to free
 */
void free_node(list_t *node)
{
	if (node->next != NULL)
		free_node(node->next);

	free(node);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Frees the memory allocated to a linked list
 * @head: The first node of the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
		free_dlistint_node(head);
}

/**
 * free_dlistint_node - Recursively frees all nodes of a linked list
 * @node: The first node to free
 */
void free_dlistint_node(dlistint_t *node)
{
	if (node->next != NULL)
		free_dlistint_node(node->next);

	if (node->prev != NULL)
		node->prev = NULL;

	free(node);
	node = NULL;
}

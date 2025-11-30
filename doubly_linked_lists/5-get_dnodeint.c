#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at the given index of the list
 * @head: The first node of the list
 * @index: The index of the desired node
 *
 * Return: A pointer to the specified node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (node == NULL)
			break;

		node = node->next;
	}

	return (node);
}

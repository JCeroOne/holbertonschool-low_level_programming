#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at the provided index
 * @h: The first node of the list
 * @idx: The index to insert the new node at
 * @n: The value of the new node
 *
 * Return: A pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *next = *h;
	dlistint_t *prev = *h;
	dlistint_t *node;
	unsigned int i;

	for (i = 0; i < idx; i++)
	{
		if (next == NULL)
			return (NULL);
		prev = next;
		next = next->next;
	}

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = next;
	node->prev = prev;

	if (next != NULL)
		next->prev = node;

	if (prev != NULL)
		prev->next = node;

	if (idx == 0)
		*h = node;

	return (node);
}

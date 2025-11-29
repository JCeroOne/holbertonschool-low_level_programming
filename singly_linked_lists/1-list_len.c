#include <stdio.h>
#include "lists.h"

/**
 * list_len - Determines the length of a linked list
 * @h: The first node of the list
 *
 * Return: The length of the list
 */
size_t list_len(const list_t *h)
{
	const list_t *node = h;
	size_t len = 0;

	while (node != NULL)
	{
		node = node->next;
		len++;
	}

	return (len);
}

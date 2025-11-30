#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Gets the length of a linked list
 * @h: The head of the list
 *
 * Return: The length of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		len++;
	}

	return (len);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Removes the node at the specified index
 * @head: The first node of the list
 * @index: The index to delete
 *
 * Return: 1 if succesful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *next = *head;
	dlistint_t *prev = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (next == NULL)
			return (-1);

		prev = next;
		next = next->next;
	}

	if (next == NULL)
		return (-1);

	if (next->next != NULL)
		next->next->prev = prev;

	if (prev != NULL)
		prev->next = next->next;
	else
		*head = next->next;

	free(next);
	next = NULL;
	return (1);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list
 * @h: The head of the list
 *
 * Return: The size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}

	return (len);
}

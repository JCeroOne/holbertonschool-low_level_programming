#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a linked list
 * @head: The first node of the list
 * @n: The value of the new node
 *
 * Return: A pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		while (current != NULL)
		{
			if (current->next == NULL)
			{
				node->prev = current;
				current->next = node;
				break;
			}
			current = current->next;
		}
	}

	return (node);
}

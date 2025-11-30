#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of a linked list
 * @head: The first element of the list
 * @str: The content of the new node
 *
 * Return: A pointer to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	int str_len = 0;

	if (node == NULL)
		return (NULL);

	while (str[str_len])
		str_len++;

	node->str = strdup(str);
	node->len = str_len;
	node->next = NULL;
	
	if (*head == NULL)
		*head = node;

	else
	{
		while (*head != NULL)
		{
			if ((*head)->next == NULL)
			{
				(*head)->next = node;
				break;
			}

			*head = (*head)->next;
		}
	}

	return (node);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: The first node of the list
 * @str: The content of the new node
 *
 * Return: A pointer to the new head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = head;

	return (node);
}

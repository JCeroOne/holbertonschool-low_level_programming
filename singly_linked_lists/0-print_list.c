#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints a linked list
 * @h: The first node of the list
 *
 * Return: The length of the list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", node->len, node->str);

		node = node->next;
		len++;
	}

	return (len);
}

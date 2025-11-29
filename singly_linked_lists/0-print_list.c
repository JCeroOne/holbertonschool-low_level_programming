#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t len = 0;
	list_t node = h;

	while(*node != NULL)
	{
		if(*node->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", strlen(*node->str), *node->str);
		node = *node->h;
		len++;
	}

	return (len);
}

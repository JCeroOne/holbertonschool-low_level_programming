#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t len = 0;
	list_t *node = h;

	while(node != NULL)
	{
		if((*node)->str == NULL)
			printf("[0] (nil)");
		else
		{
			int str_len = 0;

			while((*node)->str[str_len])
				str_len++;	
			
			printf("[%d] %s", str_len, (*node)->str)
		}
		node = (*node)->next;
		len++;
	}

	return (len);
}

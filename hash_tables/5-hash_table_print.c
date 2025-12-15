#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	int printed = 0;
	long unsigned int i;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				if (printed != 0)
					printf(", ");

				printf("'%s': '%s'", ptr->key, ptr->value);
				printed++;
				ptr = ptr->next;
			}
		}
	}

	printf("}\n");
}

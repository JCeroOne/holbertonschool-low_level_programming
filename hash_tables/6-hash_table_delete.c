#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and its elements
 * @ht: The hash table to delete
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			recursive_free(ht->array[i]);
	}

	free(ht);
}

/**
 * recursive_free - Frees a hash table node recursively
 * @node: The node to free
 */
void recursive_free(hash_node_t *node)
{
	if (node->next != NULL)
		recursive_free(node->next);

	free(node);
}

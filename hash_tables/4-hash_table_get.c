#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - Gets the value associated with a key
 * @ht: The hash table to look within
 * @key: The key to look for
 *
 * Return: The value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *element;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	element = ht->array[index];

	while (element != NULL)
	{
		if (strcmp(key, element->key) == 0)
			return (element->value);
		
		element = element->next;
	}

	return (NULL);
}

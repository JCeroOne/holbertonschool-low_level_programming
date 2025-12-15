#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table
 * @key: The key of the new element
 * @value: The value of the new element
 *
 * Return: 1 if succesful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *element = malloc(sizeof(hash_node_t));
	hash_node_t *start;
	hash_node_t *current;

	if (ht == NULL || key == NULL || element == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	start = ht->array[index];
	current = start;

	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}

		current = current->next;
	}

	free(element->value);

	element->key = key;
	element->value = strdup(value);
	element->next = start;

	ht->array[index] = element;

	return (1);
}

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
	hash_node_t *element;
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
	element = malloc(sizeof(hash_node_t));
	if(element == NULL)
		return (0);

	element->key = strdup(key);
	element->value = strdup(value);
	if (element->key == NULL || element->value == NULL)
	{
		if (element->key != NULL)
			free(element->key);
		if (element->value != NULL)
			free(element->value);
		free(element);
		return (0);
	}
	element->next = start;
	ht->array[index] = element;
	return (1);
}

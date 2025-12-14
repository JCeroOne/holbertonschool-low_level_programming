#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the table
 *
 * Return: A pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	hash_node_t **arr;

	if (size == NULL)
		return (NULL);

	ptr = malloc(sizeof(hash_table_t));

	if (ptr == NULL)
		return (NULL);

	*arr = malloc(sizeof(hash_node_t) * size);

	if (*arr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->size = size;
	ptr->array = arr;

	return (ptr);
}

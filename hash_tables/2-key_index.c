#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Gets the index of the key in the hash table array
 * @key: The key
 * @size: The size of the array in the hash table
 *
 * Return: The index of the key in the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL)
		return (NULL);

	hash = hash_djb2(key);

	return (hash % size);
}

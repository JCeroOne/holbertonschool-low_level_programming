#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array, and initializes it with char c.
 * @size: The size of the array.
 * @c: The character to initialize with.
 *
 * Return: A pointer to the newly created array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}

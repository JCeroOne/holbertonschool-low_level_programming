#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of elements.
 * @nmemb: The number of elements.
 * @size: The size of each element, in bytes.
 *
 * Return: A pointer to the allocated memory block.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *byte_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	byte_ptr = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}

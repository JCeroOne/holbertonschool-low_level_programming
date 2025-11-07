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
	void *ptr = malloc(nmemb * size);
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	*ptr = 0;

	return (ptr);
}

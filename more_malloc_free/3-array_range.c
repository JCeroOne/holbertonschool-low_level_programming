#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive)
 * @min: The minimum number.
 * @max: The maximum number.
 *
 * Return: A pointer to the array, or NULL if something fails.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		ptr[i] = min + i;

	return (ptr);
}

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Returns the index of the first integer in the array.
 * @array: The array to search.
 * @size: The size of the array.
 * @cmp: The compare function.
 *
 * Return: The index of the first integer, or -1 if something fails.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

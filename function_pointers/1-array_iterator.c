#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Iterates over an array, and executes the action function on each element.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: The function to execute for each element.
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints the first n elements of the passed array.
 * @a: The array to print.
 * @b: The number of elements to print.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		printf(", ");
	}
	printf("\n");
}

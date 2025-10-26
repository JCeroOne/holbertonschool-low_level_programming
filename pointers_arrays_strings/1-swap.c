#include "main.h"

/**
 * swap_int - Swaps the values of the two specified integers.
 * @a: The first integer pointer.
 * @b: The second integer pointer.
 */
void swap_int(int *a, int *b)
{
	int c;
		
	c = *a;
	*a = *b;
	*b = c;
}

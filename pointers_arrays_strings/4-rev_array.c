#include "main.h"

/**
 * reverse_array - Reverses up to n elements of the passed array.
 * @a: The array to reverse.
 * @n: The number of characters to swap.
 */
void reverse_array(int *a, int n)
{
	int l = 0;
	int i;

	while (a[l])
		l++;

	if (n > l)
		n = l;

	for (i = 0; i < n / 2; i++)
	{
		int tmp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The matrix.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[size * i + i];
		sum2 += a[size * i + (size - 1 - i)];
	}

	printf("%d, %d", sum1, sum2);
}

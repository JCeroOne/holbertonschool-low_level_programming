#include "main.h"

/**
 * print_diagonal - Prints a diagonal in the console.
 * @n: The length of the diagonal.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if(n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

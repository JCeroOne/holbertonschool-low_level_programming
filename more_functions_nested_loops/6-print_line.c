#include "main.h"

/**
 * print_line - Prints n lines to the console.
 * @n: The number of lines to print.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_triangle - Prints a triangle in the console.
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int i, j;
	
	if(size <= 0) {
		_putchar('\n');
	}

	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
}

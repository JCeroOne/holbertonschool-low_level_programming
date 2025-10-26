#include "main.h"

/**
 * print_rev - Prints the passed string in reverse, followed by a newline.
 * @s: The string to print.
 */
void print_rev(char *s)
{
	int l;

	for (l = _strlen(s); l <= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}

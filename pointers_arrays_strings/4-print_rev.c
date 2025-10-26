#include "main.h"

/**
 * print_rev - Prints the passed string in reverse, followed by a newline.
 * @s: The string to print.
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l])
		l++;

	for (l = l - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}

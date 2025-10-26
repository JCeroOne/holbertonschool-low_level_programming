#include "main.h"

/**
 * _puts - Prints the passed string, alongside a newline character.
 * @str: The string to print.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

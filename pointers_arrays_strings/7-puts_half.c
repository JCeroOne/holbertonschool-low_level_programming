#include "main.h"

/**
 * puts_half - Prints the second half of the passed string.
 * @str: The string.
 */
void puts_half(char *str)
{
	int l = 0;
	int i;

	while (str[l]) l++;

	for (i = 0; i < (l + l % 2) / 2; l++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - Prints every other character of the passed string, plus a newline.
 * @str: The string to print.
 */
void puts2(char *str)
{
	int l;

	for (l = 0; str[l]; l++)
	{
		if (l % 2 == 0)
			_putchar(str[l]);
	}

	_putchar('\n');
}

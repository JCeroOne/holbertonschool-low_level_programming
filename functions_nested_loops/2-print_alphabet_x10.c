#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times.
 *
 * no return
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char i;

	while (x++ < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

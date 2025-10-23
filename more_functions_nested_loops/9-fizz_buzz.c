#include "main.h"
/**
 * main - Runs the program
 * Return: 0 if succesful
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
			}
			if (i % 5 == 0)
			{
				_putchar('B');
				_putchar('u');
				_putchar('z');
				_putchar('z');
			}
		}
		else 
		{
			int h, t, u;

			h = i % 100;
			_putchar('0' + h);

			t = (i % 100) % 10;
			_putchar('0' + t);

			u = (i % 100) / 10;
			_putchar('0' + u);
		}
		_putchar(' ');
	}

	return (0);
}

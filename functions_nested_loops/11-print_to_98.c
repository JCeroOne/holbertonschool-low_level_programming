#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers from n to 98.
 * @n: the number to start from.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		printf("98\n");
	}
}
